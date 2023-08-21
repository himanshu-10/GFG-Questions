class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int maxi = 0;
        unordered_map<char,int>m;
        
        while(j < s.size()){
            
            m[s[j]]++;
            
            // unique char hit
            if(m.size() == j-i+1){
                maxi = max(maxi,j-i+1);
                j++;
            }else if(m.size() < j-i+1){     // repeatation 
                while(m.size() < j-i+1){
                    // remove i
                     m[s[i]]--;
                    if(m[s[i]] == 0)
                        m.erase(s[i]);
                    // slide the window
                    i++;
                }
                j++;
               
            }
        
        }
        return maxi;
        
    }
};