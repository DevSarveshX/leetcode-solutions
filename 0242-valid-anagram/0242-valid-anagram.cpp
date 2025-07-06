class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);
        
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++){
            count[s[i]-'a']++;
        }
        int count1=0;
        for(int i=0; i<t.size(); i++){
               count[t[i]-'a']--;
            if( count[t[i]-'a']<0){
                return false;
            }
           
        }
        return true;
    }
};