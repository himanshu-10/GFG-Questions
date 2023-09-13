class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,pair<int,int>>>maxheap;
        vector<vector<int>>ans;
        
        for(int i = 0; i<points.size(); i++){
            
            // calculate the distance
            long long int distance = (points[i][0]*points[i][0] + points[i][1]*points[i][1]);
           
            maxheap.push({distance,{points[i][0],points[i][1]}});
            
            if(maxheap.size() > k)
                maxheap.pop();
                       
        }
        
        while(maxheap.size() != 0){
            auto top = maxheap.top().second;
            maxheap.pop();
            ans.push_back({top.first,top.second});
            
        }
       
        return ans;
    }
};