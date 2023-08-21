class Solution {
public:
    string minWindow(string s, string t) {
        int i = 0;
        int j = 0;
        unordered_map<char,int>m;
        int start = 0;
        int mini = INT_MAX;
        
        // step1: cnt the element of t string
        for(int i = 0;i<t.size();i++){
            m[t[i]]++;
        }
        int cnt = m.size();
        
        while(j<s.size()){
            
            // if char is present in s then map se uska cnt dec. kro,if map me cnt 0 ho jayega to cnt ko dec kro
            if(m.find(s[j]) != m.end()){
                m[s[j]]--;
                if(m[s[j]] == 0)
                    cnt--;
                
            }
            // cnt == 0
            if(cnt == 0){
                while(cnt == 0){
                    // find i in map ,inc the cnt in map
                     if(m.find(s[i]) != m.end()){
                        m[s[i]]++;
                         // if  map me uska cnt 1 hoga to actual cnt bhi inc kro
                        if(m[s[i]] == 1){
                            cnt++;
                            // we achieve the optimize string
                            if(j-i+1 < mini){
                                mini = j-i+1;       // store the length in mini
                                start = i;          // point the starting pointer for substr
                            }
                        }                        
                    }
                i++;
                }
            
            }
            j++;
               
        }
        
        if(mini == INT_MAX) return "";
        return s.substr(start,mini);        // return
    }
};