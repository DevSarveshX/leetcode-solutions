class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        // Brute force Approach
        // sort(time.begin(), time.end());
        // int count =0;
        // for (int i=0; i<time.size()-1; i++){
        //     for(int j=i+1; j<time.size();j++){
        //         int sum=time[i]+time[j];
        //         if(sum%60==0){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        // optimized 
           int count=0;
        int freq[60]={0};
        for(int i=0; i<time.size(); i++){
            int rem= time[i]%60;
            int complement = (60- rem)%60;
            count+= freq[complement];
           freq[rem]++;
        
        }
        return count;
    }
};