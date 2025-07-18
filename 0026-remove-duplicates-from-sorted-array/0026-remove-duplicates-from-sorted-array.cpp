class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int start=1;
       int index=1;
       if(nums.size()==0){
        return 0;
       }
       while(start<nums.size()){
          if(nums[start]!=nums[start-1]){
              nums[index]=nums[start];
              index++;
          }
          start++;
       }
       return index;
    }
};