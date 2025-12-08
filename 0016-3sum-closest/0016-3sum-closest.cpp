class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = 0;
        int minDiff = INT_MAX;

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum - target);

                // Update if we found a closer sum
                if (diff < minDiff) {
                    minDiff = diff;
                    closestSum = sum;
                }

                if (sum == target) {
                    return sum; // Exact match found
                } 
                else if (sum < target) {
                    j++;
                } 
                else {
                    k--;
                }
            }
        }
        return closestSum;
    }
};
