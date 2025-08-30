class Solution {
public:
    bool canJump(vector<int>& nums) {
         int max_index_covered = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (i > max_index_covered){
             return false;
            }
            max_index_covered = max(max_index_covered, i + nums[i]); 
        }
        return true; 
    }
};