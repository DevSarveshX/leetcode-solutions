class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n);
        for(int i=0; i<ans.size(); i++){
                if(i<ans.size()/2){
                    ans[i]=nums[i];
                }
                else{
                    ans[i]=nums[i-n];
                }
        }
        return ans;
    }
};