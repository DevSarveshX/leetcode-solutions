// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& arr) {
//         for(int i=0; i<arr.size(); i++){
//                 arr[i]=arr[i]*arr[i];
            
//         }
//         sort(arr.begin(), arr.end());
//         return arr;
//     }
// };
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;
        int pos = n - 1;  // fill from last

        while (left <= right) {
            int leftSq = arr[left] * arr[left];
            int rightSq = arr[right] * arr[right];

            if (leftSq > rightSq) {
                ans[pos] = leftSq;
                left++;
            } else {
                ans[pos] = rightSq;
                right--;
            }
            pos--;
        }

        return ans;
    }
};
