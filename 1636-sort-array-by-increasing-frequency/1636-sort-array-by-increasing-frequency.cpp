class Solution {
    
    
    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        return  (a.second==b.second) ? a.first>b.first : a.second<b.second;
    }
    
    
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int>m;
        vector<int>ans;
        
        // frequency count of all the elemnt
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }

        // store the pair in a freqArray
        vector<pair<int,int>>freqCnt;
        for(auto i: m){
            freqCnt.push_back(i);
        }
        
        // sort the freqCnt
        sort(freqCnt.begin(),freqCnt.end(),cmp);
        for(auto it :freqCnt){
            for(int i = 0;i<it.second;i++){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};