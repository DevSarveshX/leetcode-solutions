class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Brute force
        // int ans=0;
        // for(int i=0; i<nums.size()-1;i++){
        //     for(int j=i+1; j<nums.size(); j++ ){
        //         if(nums[i]==nums[j]){
        //             ans = nums[i];
        //         }
        //     }
        // }
        // return ans;
        // Optimize Approach
        // XOR all the array Elements
      
        sort(nums.begin(), nums.end());
        int ans = -1;

        for (int start = 0; start < nums.size() - 1; start++) {
            if (nums[start] == nums[start + 1]) {
                ans = nums[start];
                break;
            }
        }
       return ans;
    }
};