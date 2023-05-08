/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 0;
        int end = n;
        
        while(start <= end){
            
            int mid = start + (end - start)/2 ; 
            
            int picked = guess(mid);
            if(picked == 0){
                return mid;
            }else if(picked < 0){
                 end = mid - 1 ;
            }else{
                start = mid +1;
            }
            
            
        }
        return -1;
    }
};