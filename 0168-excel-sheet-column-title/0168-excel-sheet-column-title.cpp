class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        
        // Subtract 1 from the given columnNumber (to convert it to a 0-based index), and calculate the                 remainder of dividing it by 26.
        // Add 'A' to the remainder to get the corresponding character.    
        // Append the character to the beginning of the result string.
        // Update columnNumber by dividing it by 26 (integer division).
        
        string result = "";
        
        while(columnNumber > 0){
            
            columnNumber--;
            char ch =  'A' + (columnNumber%26);
            result = ch + result;
            columnNumber /= 26;
        }
        
        return result;
            
    }
};