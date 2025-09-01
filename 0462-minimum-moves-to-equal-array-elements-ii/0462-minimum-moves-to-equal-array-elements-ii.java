// class Solution {
//     public int minMoves2(int[] nums) {
//         Arrays.sort(nums);
//         int n = nums.length;
//         int totalMove = Integer.MAX_VALUE;

//         for (int i = 0; i < n; i++) {
//             int move = 0;
//             for (int j = 0; j < n; j++) {
//                 move += Math.abs(nums[j] - nums[i]); // simpler and correct
//             }
//             totalMove = Math.min(totalMove, move);
//         }
//         return totalMove;
//     }
// }
class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        
        // Median is the optimal target
        int median = nums[n / 2];
        int moves = 0;
        
        for (int num : nums) {
            moves += Math.abs(num - median);
        }
        
        return moves;
    }
}
