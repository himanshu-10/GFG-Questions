//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,int>m;
        
        for(int i =0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(int i =0;i<n;i++){
            int key = arr[i];
            auto temp = m.find(key);
            
            // Method 1: 
            // int val = temp -> second;
            // if(val > 1){
            //     return i+1;
            // }
            
            //Method 2: 
            if(temp -> second > 1){
                return i+1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends