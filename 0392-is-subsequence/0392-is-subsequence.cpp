class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        int cnt = 0;
        for(int i = 0; i< t.size() &&  s.size();i++){
            if(s[j] == t[i]){
                cnt++;
                j++;
            }  
        }
        
        return cnt == s.size() ?  true :  false;
    }
};