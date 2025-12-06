class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalproduct=1;
        int ProductwithoutZero=1;
        int zerocount=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zerocount++;
            }
            else{
                totalproduct*=nums[i];
                ProductwithoutZero*=nums[i];
            }
        }
        vector<int>ans(nums.size(), 0);
        //case 1 
        if(zerocount>1){
            return ans;  //all will be zero
        }
        //case 2
        if(zerocount==1){
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==0){
                    ans[i]=ProductwithoutZero;
                }
            }
              return ans;
        }
        //no zero
        for(int i=0; i<nums.size(); i++){
           ans[i]=totalproduct/nums[i];
        }
        return ans;
    }
};