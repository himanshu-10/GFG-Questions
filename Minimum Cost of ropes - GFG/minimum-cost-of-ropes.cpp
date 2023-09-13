//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
       // min heap
       priority_queue<long long,vector<long long>,greater<long long>>minheap;
       
       long long totalCost = 0;
       for(int i = 0;i<n;i++){
           minheap.push(arr[i]);
       }
       
       while(minheap.size() >=2){
           long long e1 = minheap.top();
           minheap.pop();
           long long e2 = minheap.top();
           minheap.pop();
           
           long long sum = e1+e2;
           minheap.push(sum);
           totalCost+=sum;
       }
       
       return totalCost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends