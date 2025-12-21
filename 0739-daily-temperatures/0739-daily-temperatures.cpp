class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int> v;
        stack<int> s;
        int n= nums.size();
        for(int i=n-1; i>=0 ; i--){
            if(s.size()==0){
                v.push_back(0);
            }
            else if(s.size()>0 && nums[s.top()]>nums[i]){
                v.push_back(s.top()-i);
            }
            else if(s.size()>0 && nums[s.top()]<= nums[i]){
                while(s.size()>0 && nums[s.top()]<= nums[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(0);
                }
                else{
                    v.push_back(s.top()-i);
                }
            }
            s.push(i);
        }
        reverse(v.begin(), v.end());
        return v;
       
    }
};