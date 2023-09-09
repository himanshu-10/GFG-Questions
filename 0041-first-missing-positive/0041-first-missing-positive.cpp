class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        // consider a set
        set<int>s;
        // storing element in the set
        for(int i = 0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        int i =1;
        // if element found in set inc. the counter pointer ,else return pointer
        while(s.count(i)!= 0){
            i++;
        }
        return i;
        
    }
};