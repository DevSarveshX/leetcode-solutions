class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int n = cardPoints.length;
        int totalSum = 0;
        for (int num : cardPoints) {
            totalSum += num;
        }

        // Window size of cards NOT taken
        int windowSize = n - k;

        // Step 1: Calculate sum of first window
        int windowSum = 0;
        for (int i = 0; i < windowSize; i++) {
            windowSum += cardPoints[i];
        }

        int minWindowSum = windowSum;

        // Step 2: Slide the window
        for (int i = windowSize; i < n; i++) {
            windowSum += cardPoints[i];             // add new element
            windowSum -= cardPoints[i - windowSize]; // remove old element
            minWindowSum = Math.min(minWindowSum, windowSum);
        }

        // Maximum score = totalSum - minimum sum of window left out
        return totalSum - minWindowSum;
    }
}
