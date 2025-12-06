class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        // 1. Find pivot
        for (int i = n-2; i >= 0; i--) {
            if (nums[i] < nums[i+1]) {
                pivot = i;
                break;
            }
        }

        // 2. If no pivot → reverse everything
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 3. Find element just larger than pivot
        for (int i = n-1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // 4. Reverse suffix
        int left = pivot + 1, right = n - 1;
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};
