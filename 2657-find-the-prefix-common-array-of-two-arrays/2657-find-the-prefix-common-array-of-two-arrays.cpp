class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        
        vector<int>ans;
        set<int>s;
        map<int,bool>m1,m2;
        
        for(int i = 0;i<a.size();i++){
            
            // make both element true in map
            m1[a[i]] = m2[b[i]] = true;
            
            // find 2nd array element in first map ,if find insert into set            
            if(m1.find(b[i]) != m1.end()) 
                s.insert(b[i]);
            
            // find 1st array element in second map ,if find insert into set
            if(m2.find(a[i]) != m2.end())
                s.insert(a[i]);
            
            // insert size of set in ans array
            ans.push_back(s.size());
        }
        return ans;
        
    }
};