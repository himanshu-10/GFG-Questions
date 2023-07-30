//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n){

    
    // for(int i=0; i<size; i++){
    //     for(int j=i+1; j<size; j++){
    //         if(abs(arr[i]-arr[j]) == n){
    //             return true;
    //             break;
    //         }
    //     }
    // }
    // return false;
    
    
    sort(arr,arr+size);
    for(int i=0; i<size; i++){
        int val1 = arr[i];
        int low = i+1, high = size-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid] == val1 + n){
                return true;
            }else if(arr[mid] < val1 + n){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
    return false;
    
}