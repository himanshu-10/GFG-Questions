class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n = strs.size();

      // sort the string
      sort(strs.begin(),strs.end());
      string ans = "";
      string a = strs[0];       // first element after sorting
      string b = strs[n-1];     // last element after sorting

      for(int i =0; i<a.length();i++){
          if(a[i] == b[i]){
              ans += a[i];
          }else{
              break;
          }
      }  
      return ans;
    }
};