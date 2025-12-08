 class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int K) {
        vector<int> freq(K, 0);
        freq[0] = 1; // initial remainder 0 for subarrays starting from index 0
        int sum = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % K;
            if (rem < 0) rem += K; // handle negative remainders

            count += freq[rem];   // subarrays ending here with same remainder
            freq[rem]++;          // update remainder frequency
        }

        return count;
    }
};
