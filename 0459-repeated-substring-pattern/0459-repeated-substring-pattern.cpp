class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
            // 1. concatenation
            // 2. find substring
            // 3. compare with length
            // 4. return 0/1
         return (s + s).find(s, 1) < s.size();
    }
};