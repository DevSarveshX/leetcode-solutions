class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char, int>freq1;
        for(int i=0; i<s.size(); i++){
            freq1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            if(freq1.find(t[i])!=freq1.end()){
                if(freq1[t[i]]==0){
                    return false;
                    break;
                }
                 freq1[t[i]]--;
            }
            else{
               return false;
            }
        }
      return true;
    }
};