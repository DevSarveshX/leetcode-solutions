class Solution {
public:
    bool canJump(vector<int>& nums) {
         int farthest = 0;  // the farthest index we can reach
        for (int i = 0; i < nums.size(); i++) {
            if (i > farthest) return false; // if current index is not reachable
            farthest = max(farthest, i + nums[i]); // update farthest reach
        }
        return true; // we never got stuck
    }
};