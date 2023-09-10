class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int,int>m;
        int cnt = 0;
        
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        nums.clear();
        for(auto i: m){
            int frequency = i.second;
            
            if(frequency > 2){
                frequency = 2;
                cnt +=2;
                
            }
            else{
                cnt += frequency; 
            }
            
            
            for(int j = 0; j<frequency;j++){
                nums.push_back(i.first);
            }
        }
        return cnt;
    }
};