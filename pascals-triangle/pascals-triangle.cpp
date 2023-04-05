class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);

        for(int i =0;i<numRows;i++){
            // resize the array in every new row i.e increase by 1
            ans[i].resize(i+1);
            // initialize the 1st and last value to 1
            ans[i][0] = ans[i][i]=1;
            // iterate from 2nd to last position-1
            for(int j=1;j<i;j++){
                ans[i][j]= ans[i-1][j] + ans[i-1][j-1];
            }
        }
        return ans;
    }
};