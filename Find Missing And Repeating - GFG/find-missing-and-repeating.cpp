//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        vector<int>v;
        map<int, int>mp;
        for(int i =0; i<n; i++){
            mp[arr[i]]++;
        }
        int count =1;
        for(auto it :mp){
            if(it.second ==2)v.push_back(it.first);
            
        }
        for(auto it :mp){
         if(it.first !=count){
            v.push_back(count);
            break;
            }
            else{
                count++;
            }
        }
        if(mp.find(count) == mp.end())v.push_back(n);
        
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends