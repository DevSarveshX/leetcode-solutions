class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int ans=-1;
        unordered_map<int,int>freq;
        for(int i=0; i<n; i++){
              freq[nums[i]]++;
            if(freq.find(nums[i])!=freq.end()){
                if(freq[nums[i]]>n/2){
                    ans= nums[i];
                    break;
                }
            }
        }
        return ans;
    }
};