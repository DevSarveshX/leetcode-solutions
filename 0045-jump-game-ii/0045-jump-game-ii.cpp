class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return 0;
        }
        int count =0;
        int max_indexed_covered=0;
        int current_end=0;
        for(int i=0; i<n; i++){
          max_indexed_covered=max(max_indexed_covered, i+nums[i]);
          if(i==current_end){
              count++;
              current_end=max_indexed_covered;
              if(current_end>=n-1){
                 break;
              }
          }
        }
        return count;
    }
};