class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int k =3;
        int n = s.size();
        int i = 0;
        int j = 0;
        int cnt = 0;
        
        unordered_map<char,int>m;
        
        
        while(j <n){
            // insert element into map [alculation]
            m[s[j]]++;
            
            if(j-i+1 < k)
                j++;
            
            else if(j-i+1 == k){    // window hit 
                
                //map size == window size
                    // cal ans
                    // remove cal of i
                    // slide window
                            
                if(m.size() == k){      
                    cnt++;
                    m[s[i]]--;
                    if(m[s[i]] == 0){
                        m.erase(s[i]);
                    }
                    i++;
                    j++;
                    
                }else
                    
                    // window hit < map size
                        // remove cal of i
                        // slide window
                    if(m.size() < k){
                        m[s[i]]--;
                        if(m[s[i]] == 0){
                            m.erase(s[i]);
                        }
                        i++;
                        j++;
                    }
                
            }
            
        }
        return cnt;
    }
};