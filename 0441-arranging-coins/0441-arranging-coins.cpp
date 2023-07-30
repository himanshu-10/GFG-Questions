class Solution {
public:
    int arrangeCoins(int n) {
        
        int row =1;
        while(n>0){
            row++;
            n= n-row;
        }
        return row -1;
    }
};