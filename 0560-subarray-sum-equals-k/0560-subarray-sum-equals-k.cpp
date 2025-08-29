class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int count =0; 
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==k){
                count++;
            }
            int sum=arr[i];
            int index=i+1;
            while(index<arr.size()){
                sum+=arr[index];
                if(sum==k){
                    count++;
                }
                index++;
            }
        }
        return count;
    }
};