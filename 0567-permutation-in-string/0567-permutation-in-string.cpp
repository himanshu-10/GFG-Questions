class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int len1 = s1.size();
        int len2 = s2.size();
        
        sort(s1.begin(),s1.end());
        
        if(len1 > len2) return false;
        
        for(int i =0;i<len2-len1+1;i++){
            string taken = s2.substr(i,len1);
            sort(taken.begin(),taken.end());
            if(taken == s1){
                return true;
            }
        }
        return false;
        
    }
};