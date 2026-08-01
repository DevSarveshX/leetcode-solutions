class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int count =0; 
        int prefixsum=0;
        unordered_map<int, int>mp;
        mp[0]=1;
        for(int i=0; i<arr.size(); i++ ){
            prefixsum+=arr[i];
            int need=prefixsum-k;
            if(mp.find(need)!=mp.end()){
                count+=mp[need];
            }
            mp[prefixsum]++;
        }
        return count;
    }
};