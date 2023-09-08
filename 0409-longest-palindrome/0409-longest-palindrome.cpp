class Solution {
public:
    int longestPalindrome(string s) {
        // STEP1: MAPPING THE CHAR
        // STEP2: STORE THE CNT
        //STEP3: GENERATE ANS.
        int cnt = 0;
        unordered_map<char,int>m;
        for (auto i:s){
            m[i]++;
            // STEP2 : CHAR CNT VALUE IS ODD , THEN INC CNT BY 1
            // ELSE DESC CNT BY 1
            if(m[i] % 2 == 0){
                cnt--;
            }else{
                cnt++;
            }
        }
        //STEP3
        if(cnt > 1){
            return s.size()-cnt+1;
        }else
            return s.size();
        
        
    }
};