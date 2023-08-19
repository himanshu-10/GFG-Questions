class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>l;
        int i = 0;
        int j = 0;
        
        while(j < nums.size()){
            
            // calculation
            while(l.size() > 0 && l.back() < nums[j]){
                l.pop_back();
            }
            l.push_back(nums[j]);
            
            if(j-i+1 < k){
                j++;
            }else 
                if(j-i+1 == k){
                    //calculate ans with the help of upper calculation
                    ans.push_back(l.front());
                    
                    // remove the calculation of i
                    if(nums[i] == l.front()){
                        l.pop_front();
                    }
                    // slide the window
                    i++;
                    j++;
                
                }
            
        }
        return ans;
    }
};