class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
         int row = mat.size();
        int col = mat[0].size();
        vector <int> ans;
        map <int,vector<int>> mp;
        
        for( int i = 0; i < row; i++ ){
            for( int j = 0; j < col; j++ ){
                mp[i+j].push_back(mat[i][j]);
            }
        }

        for( auto it : mp ){
            if( it.first % 2 == 0 ){
                for(int j = it.second.size() - 1; j >= 0; j-- ){
                    ans.push_back(it.second[j]);
                }
            }
            else{
                for( int j = 0; j < it.second.size(); j++ ){
                    ans.push_back(it.second[j]);
                }
            }
        }

        return ans;

    }
};