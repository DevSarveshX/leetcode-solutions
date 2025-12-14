// class Solution {
// public:
//     int maxScore(vector<int>& nums, int k) {
//         int n = nums.size();
//         int TotalSum = 0;
//         for (int i = 0; i < n; i++) {
//             TotalSum += nums[i];
//         }

//         int left = 0;
//         int right = n - 1;
//         int score = 0;

//         while (k > 0) {
//             if (nums[left] == nums[right]) {
//                 // if both ends same, pick one (not both)
//                 score += nums[left];
//                 left++;  // move only left
//             }
//             else if (nums[left] > nums[right]) {
//                 score += nums[left];
//                 left++;
//             }
//             else {
//                 score += nums[right];
//                 right--;
//             }
//             k--;
//         }

//         return score;
//     }
// };


class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix(k+1 , 0), suffix(k+1 , 0);

        for (int i = 0; i < k; i++)
            prefix[i + 1] = prefix[i] + nums[i];

        for (int i = 0; i < k; i++)
            suffix[i + 1] = suffix[i] + nums[n - 1 - i];

        int maxScore = 0;
        for (int i = 0; i <= k; i++)
            maxScore = max(maxScore, prefix[i] + suffix[k - i]);

        return maxScore;
    }
};

