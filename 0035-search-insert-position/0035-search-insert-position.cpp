class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int ans = 0;
        
        while(s <= e){
            if(nums[mid] == target){
                ans =  mid;
                break;
            }else if(nums[mid] > target){
                e = mid-1;
                ans = s;
            }else {
                s = mid+1;
                ans = s;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};