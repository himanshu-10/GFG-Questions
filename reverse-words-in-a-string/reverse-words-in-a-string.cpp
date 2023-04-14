class Solution {
public:
    string reverseWords(string s) {
        string result;
        int i = 0;
        int n = s.length();

        while(i<n){
            // check for space
            while(i < n && s[i] == ' '){
                i++;
            }
            if(i>=n) break;
            int j = i+1;
            // check no of char
            while(j < n && s[j] != ' '){
                j++;
            }

            string str = s.substr(i,j-i);
            if(result.length() == 0){
                result = str;
            }else{
                result = str + " " + result;
            }
            i = j+1;
                
            
        }
        return result;
    }
};