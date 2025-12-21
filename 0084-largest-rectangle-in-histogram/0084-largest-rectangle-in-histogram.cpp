class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        if(arr.size() == 0) return 0; 
        //NSL
        vector<int>left;
        stack<pair<int, int>>s;
        int leftIndex=-1;
        int n= arr.size();
        for(int i=0; i<n; i++){
            if(s.size()==0){
                left.push_back(leftIndex);
            }
            else if(s.size()>0 && s.top().first<arr[i]){
                left.push_back(s.top().second);
            }
             else if(s.size()>0 && s.top().first>=arr[i]){
                while(s.size()>0 && s.top().first>=arr[i]){
                    s.pop();
                }
                  if(s.size()==0){
                       left.push_back(leftIndex);
                  }
                  else{
                     left.push_back(s.top().second);
                  }
             }
             s.push({arr[i], i});
        }
        //NSR
         vector<int>right;
        stack<pair<int, int>>s1;
        int rightIndex=arr.size();
        int m= arr.size();
        for(int i=m-1; i>=0; i--){
            if(s1.size()==0){
                right.push_back(rightIndex);
            }
            else if(s1.size()>0 && s1.top().first<arr[i]){ 
                right.push_back(s1.top().second);
            }
             else if(s1.size()>0 && s1.top().first>=arr[i]){
                while(s1.size()>0 && s1.top().first>=arr[i]){
                    s1.pop();
                }
                  if(s1.size()==0){
                       right.push_back(rightIndex);
                  }
                  else{
                     right.push_back(s1.top().second);
                  }
             }
             s1.push({arr[i], i});
        }
        reverse(right.begin(), right.end());
        
        vector<int>width(n);
        for(int i=0; i<width.size(); i++){
            width[i]=right[i]-left[i]-1;
        }
        vector<int>area(n);
        for(int i=0; i<area.size(); i++){
            area[i]= arr[i]*width[i];
        }
        int maxarea= INT_MIN;
        for(int i=0; i<area.size(); i++){
            maxarea=max(maxarea, area[i]);
        }
         return maxarea;
    }
};