class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0;
        int j = 0;
        int maxi = 1;
        unordered_map<int,int>m;
        
        while(j < fruits.size()){
            
            m[fruits[j]]++;
            
            if(m.size() < 2){
                maxi = max(maxi,j-i+1);
                j++;
            }else if(m.size() == 2){
                maxi = max(maxi,j-i+1);
                j++;
            }else if(m.size() > 2){
                while(m.size() > 2){
                    m[fruits[i]]--;
                    if(m[fruits[i]] == 0)
                        m.erase(fruits[i]);
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};