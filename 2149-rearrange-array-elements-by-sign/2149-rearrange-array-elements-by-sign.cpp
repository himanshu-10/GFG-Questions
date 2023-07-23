class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr1;
        vector<int>arr2;
        vector<int>ans;
        
        
        for(int i = 0; i<n;i++){
            if(nums[i] > 0){
                arr1.push_back(nums[i]);
            }else if(nums[i]<0){
                arr2.push_back(nums[i]);
            }
        }
        
        stack<int>s;
        for(int i = 0;i<arr1.size();i++){
            s.push(arr1[i]);
            s.push(arr2[i]);
        }
        
        while(!s.empty()){
            int top = s.top();
            s.pop();
            ans.push_back(top);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
//         for(int i = 0; i<n;i++){
//             if(nums[i] > 0){
//                 arr1.push_back(nums[i]);
//             }else if(nums[i]<0){
//                 arr2.push_back(nums[i]);
//             }
//         }
        
//         for(int i =0;i<arr1.size();i++){
//             ans.push_back(arr1[i]);
//             ans.push_back(arr2[i]);
//         }
//         return ans;
        
    }
};