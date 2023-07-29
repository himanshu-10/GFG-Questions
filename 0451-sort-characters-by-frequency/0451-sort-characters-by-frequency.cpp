class Solution {
public:
     static bool cmp(pair<char,int>&a, pair<char,int>&b) {
        return a.second>b.second;
    }
    string frequencySort(string s) {
             
        // create map
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        // create frequency pair
        vector<pair<char,int>>freqCnt;
        for(auto freq:m){
            freqCnt.push_back(freq);
        }
        
        // sort the freqCnt
        sort(freqCnt.begin(),freqCnt.end(),cmp);
        
        //iterate in freqCnt to print the output
        string ans="";
        for(auto i:freqCnt){
            for(int j = 0;j<i.second;j++){
                ans+=i.first;
            }
        }
        return ans;
    }  
};