class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans;
       
        for(int i = 0; i<=n; i++){
            // represent 1's 
            int once = 0;
            
            int nums = i;
            
            while(nums != 0){
                
                once += nums%2;
                nums = nums/2;
            }
            ans.push_back(once);
        }
        return ans;
    }
};