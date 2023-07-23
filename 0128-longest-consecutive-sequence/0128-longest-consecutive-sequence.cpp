class Solution {
public:
    
    bool ls(vector<int>& nums , int x){
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == x){
                return true;
            }
        }return false;
    }
    int longestConsecutive(vector<int>& nums) {
        
        
        // BRUTE FORCE
        
//         if(nums.size() == 0) return 0;
//         int longest = 1;
//         for(int i = 0;i<nums.size();i++){
//             int x = nums[i];
//             int cnt = 1;
            
//             while(ls(nums,x+1) == true){
//                 x = x+1;
//                 cnt++;
//             }
//             longest = max(cnt,longest);
//         }
//         return longest;
        
        
        // OPTIMAL : USING SET
        
        int longest = 1;
        if(nums.size() == 0) return 0;
        unordered_set<int>s;
        
        // insert all element in set
        for(int i = 0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        for(auto it : s){
            
            // if "it" is a starting no 
            if(s.find(it-1) == s.end()){
                int x = it;
                int cnt = 1;
                while(s.find(x+1) != s.end()){
                    x = x+1;
                    cnt++;
                }
                longest = max(longest,cnt);
            }
            
            
        }
        return longest;
    }
};