class Solution {
public:
    string addBinary(string a, string b) {
        
        
//          string s = "";
        
//         int c = 0, i = a.size() - 1, j = b.size() - 1;
//         while(i >= 0 || j >= 0 || c == 1)
//         {
//             c += i >= 0 ? a[i --] - '0' : 0;
//             c += j >= 0 ? b[j --] - '0' : 0;
//             s = char(c % 2 + '0') + s;
//             c /= 2;
//         }
        
//         return s;
        
        int aLen = a.length();
        int bLen = b.length();
        int i = 0;
        int carry = 0;
        string ans = "";
        
        while(i < aLen || i < bLen || carry != 0){
            int x = 0;
            if(i < aLen && a[aLen - i - 1] == '1')
                x = 1;
            
            int y = 0;
            if(i < bLen && b[bLen - i - 1] == '1')
                y = 1;
            ans = to_string((x+y+carry)%2) + ans;
            carry = (x+y+carry)/2;
            i++;
            
        }
        return ans;
        
        
    }
};