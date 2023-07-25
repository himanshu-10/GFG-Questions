class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        set<int>s;
        for(int i = 0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto it:m){
            s.insert(it.second);
        }
        if(m.size()== s.size()){
            return true;
        }
        return false;
        
    }
};