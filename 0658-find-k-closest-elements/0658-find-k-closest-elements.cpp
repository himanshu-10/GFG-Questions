class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        // initialize a priority queue
        priority_queue<pair<int,int>>maxHeap;
        vector<int>ans;
        
        for(int i = 0; i< arr.size(); i++){
            // push the element
            maxHeap.push({abs(arr[i] - x), arr[i]});
            // check size
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
            
        }
        // final k closest element -> push into ans vector
        while(maxHeap.size() != 0){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        // sort the ans vector
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};