class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Step 1: Start from last digit
        for (int i = n - 1; i >= 0; i--) {

            // If digit < 9 → increase and return
            if (digits[i] < 9) {
                digits[i]++;
                return digits;  // No more carry needed
            }

            // If digit == 9 → make it 0 and continue carry
            digits[i] = 0;
        }

        // Step 2: If loop ends → all were 9
        // Example: 999 → 000 → need extra 1 at start
        digits.insert(digits.begin(), 1);

        return digits;
    }
};
