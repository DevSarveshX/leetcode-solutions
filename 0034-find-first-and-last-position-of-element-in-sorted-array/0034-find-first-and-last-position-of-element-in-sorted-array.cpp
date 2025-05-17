class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int first=-1, start=0, end=arr.size()-1, mid;
        while(start<=end){
            mid= start+(end-start)/2;
            if(arr[mid]==target){
                first=mid;
                end=mid-1;
            }
          else if(arr[mid]>target){
           end=mid-1;
          }
          else{
            start=mid+1;
          }  
        }
         int last=-1;
         start=0, end=arr.size()-1, mid;
           while(start<=end){
            mid= start+(end-start)/2;
            if(arr[mid]==target){
                last=mid;
                start=mid+1;
            }
          else if(arr[mid]>target){
           end=mid-1;
          }
          else{
            start=mid+1;
          }  
        }
        return{first,last};
    }
};