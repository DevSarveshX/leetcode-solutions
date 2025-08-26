class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
       
        // vector<int>ans;
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i]==nums[i-1]){
        //         ans.push_back(nums[i]);
                
        //     }
        // }
        //     return ans;

        //first find the max element in nums
        vector<int>ans;
        int max= INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        int n=max;
        vector<int>freq(n+1,0);
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(int i=0; i<freq.size();i++){
            if(freq[i]>1){
                ans.push_back(i);
            }
        }
        return ans;
    }
   
};