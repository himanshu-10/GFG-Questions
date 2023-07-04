class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        int ans;
        for(int i = 0; i< nums.size();i++){
            m[nums[i]]++;
        }
        
        for(int i = 0; i<nums.size();i++){
            int key = nums[i];
            auto temp = m.find(key);
            if(temp->second == 1)
                ans = key;
                
        }
        return ans;
    }
};