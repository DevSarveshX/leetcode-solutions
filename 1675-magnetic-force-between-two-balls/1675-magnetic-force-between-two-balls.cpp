class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int start=1,end,mid,ans=0;
        sort(position.begin(),position.end());
        end=position[position.size()-1]-position[0];
        while(start<=end){
          mid=start+(end-start)/2;
          int count=1, pos=position[0];
          for(int i=1;i<position.size();i++)
          {
          if(pos+mid<=position[i]){
            count++;
            pos=position[i];
          }
        }
        if(count<m){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        }
        return ans;
    }
};