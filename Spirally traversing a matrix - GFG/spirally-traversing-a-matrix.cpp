//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int>ans;
        int cnt = 0;
        int total = r*c;
        
        // initialize indexes
        int sRow = 0;
        int sCol = 0;
        int eRow = r-1;
        int eCol = c-1;
        
        // looping
        while(cnt < total){
            
            // print 1st row
            for(int index = sCol; index <= eCol && cnt < total; index++){
                ans.push_back(matrix[sRow][index]);
                cnt++;
            }
            sRow++;
            
            // print last col
            for(int index = sRow; index <= eRow && cnt < total; index++){
                ans.push_back(matrix[index][eCol]);
                cnt++;
            }
            eCol--;
            
            // print last row
            for(int index = eCol ; index >= sCol && cnt < total; index--){
                ans.push_back(matrix[eRow][index]);
                cnt++;
            }
            eRow--;
            
            // print 1st col
            for(int index = eRow; index >= sRow && cnt < total; index--){
                ans.push_back(matrix[index][sCol]);
                cnt++;;
            }
            sCol++;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends