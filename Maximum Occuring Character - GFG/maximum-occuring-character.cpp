//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int>m;
        int maxi = -1;
        int maxc = '\0';
        for(int i=0;i<str.size();i++){
            m[str[i]]++;
        }
        for(auto it:m){
            if((it.second > maxi) || (it.second == maxi && it.first < maxc) ){
                maxi = it.second;
                maxc = it.first;
            }
        }
        return maxc;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends