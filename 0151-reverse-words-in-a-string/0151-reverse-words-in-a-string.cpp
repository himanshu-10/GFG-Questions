class Solution {
public:
    string reverseWords(string s) {
        
        if(s.size() == 1) return s;
        
        stack<string>st;
        string temp = "";
       
        // ek word pick kr rhe hai,
        // check for space aur null , if null space appear -> push into stack
        // else store into temp
        
        for(int i = 0;i<=s.size();i++){
           if((s[i] == ' ' || s[i] == '\0') && temp != ""){
               st.push(temp);
               temp = "";
           }
           else if(s[i] != ' '){
               temp+=s[i];
           }
        }
        
        temp.clear();
        
        while(!st.empty()){
            temp += st.top();
            st.pop();
            
            // check if stack me aur words hai ya nhi,, if present put a space ' ' in temp
            if(st.size() >0){
                temp+=' ';
            }
        }
        return temp;
        
        
      
    }
};