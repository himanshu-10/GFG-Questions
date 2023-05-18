class Solution {
public:
    double myPow(double x, int n) {
        
    // if (n == 0)
    //     return 1;
    // // If we need to find of 0^y
    // if (x == 0)
    //     return 0;
    // // For all other cases
    // return x * pow(x, n - 1);

    return pow(x, n);
    }
};