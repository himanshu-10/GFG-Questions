class Solution {
public:
    int myAtoi(string s) {
        
        int MAX = INT_MAX, MIN = INT_MIN;
        if(s.size() == 0)
            return 0;
        
        // remove whiteSpace
        int i = 0;
        while(i<s.size() && s[i] == ' '){
            i++;
        }
        
        // extract string after removing white space
        s = s.substr(i);
        
        int sign = +1;
        long ans = 0;
        
        // check for - and +
        if(s[0] == '-')
            sign = -1;
        
        // maintain the index of i
        
        if(s[0] == '-' || s[0] == '+'){
            i = 1;
        }else i = 0;
        
        
        // iterate in string
        while(i <s.size()){
            if(!isdigit(s[i]))
                break;
            
            ans = ans*10 + s[i]-'0';
            
            // edge case : check for upper and lower limit
            if(sign == -1 && -1*ans < MIN) return MIN;
            if(sign == 1 && ans > MAX) return MAX;
            
            i++;
        }
        
        return (int)(ans*sign);
        
        
        
    }
};