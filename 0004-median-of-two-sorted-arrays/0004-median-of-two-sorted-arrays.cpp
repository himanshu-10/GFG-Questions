class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>merge;
        for(int i =0;i< nums1.size();i++){
            merge.push_back(nums1[i]);
        }
        for(int i = 0;i<nums2.size();i++){
            merge.push_back(nums2[i]);
        }
        double median = 0;
        
        sort(merge.begin(),merge.end());
        
        int len = merge.size();
        
        if(len %2 == 1){
            // odd lenght
            median = merge[len/2];
        }else{
            // even lenght
              median = (merge[len/2-1]+merge[len/2])/2.0;
        }
        return median;
    }
};