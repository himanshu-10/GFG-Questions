class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        char m1[128] = {0};
        char m2[128] = {0};
        
        int n = s.size();
        for(int i = 0;i<n; ++i){

            // phle se pda hai to check krenge aur false return krayenge
            if((m1[s[i]]) != m2[t[i]] )
                return false;
            m1[s[i]] = i+1;
            m2[t[i]] = i+1;
            
        }
        return true;
    }
};