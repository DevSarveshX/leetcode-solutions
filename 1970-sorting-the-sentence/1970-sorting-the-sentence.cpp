class Solution {
public:
    string sortSentence(string s) {
        int index=0, count=0;
        vector<string> ans(10);
        string temp;
        while(index<s.size()){
            if(s[index]==' '){
                int pos= temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
                index++;
            }
            else{
                temp+=s[index];
                index++;
            }
        }
        int pos= temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;

        for(int i=1; i<=count; i++){
            temp+=ans[i];
            temp+=' ';
        
        }
        temp.pop_back();
        return temp;
    }
};