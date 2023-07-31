class Solution {
public:
    int beautySum(string s) {
        
        int lowestFreq = 500;
        int heighestFreq = 0;
        int ans = 0;
        for(int i = 0;i<s.size();i++){
            unordered_map<char,int>m;
            for(int j = i;j<s.size();j++){   // count the frequency
                m[s[j]]++; 
                for(auto it:m){
                    lowestFreq = min(lowestFreq,it.second);
                    heighestFreq = max(heighestFreq,it.second);
                }
                ans += (heighestFreq-lowestFreq);
                lowestFreq = 500;
                heighestFreq = 0;
            }
            
        }
        return ans;
    }
};