class Solution {
public:
    int maxArea(vector<int>& height) {
        
        // APPROACH: 2 POINTER 
        int left = 0;
        int right = height.size()-1;
        int ans = 0;
        int area;
        
        while(left <= right){
            // cal height
            int length = min(height[left],height[right]);
            // cal. width
            int width = right - left;
            // cal area
            area = length * width;
            // max area
            ans = max(ans,area);
            
            // moving pointer
            if(height[left] < height[right])
                left++;
            else
                right--;
            
            
        }
        
        return ans;
    }
};