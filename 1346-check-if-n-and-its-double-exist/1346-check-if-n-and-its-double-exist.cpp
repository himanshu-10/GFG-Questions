class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        // int i = -1;
        // int j = -1;
        
        for (int i = 0; i < arr.size(); i++) {
            int n = arr[i];
            for (int j = i + 1; j < arr.size(); j++) {
                int m = arr[j];
                if ( n == (2 * m) || m == (2 * n)) {
                    return true;
                }
            }
        }
        
        return false;
        
    }
};