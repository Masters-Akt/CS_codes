//Problem: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
//TC = O(N), SC = O(1)
string encode(string src)
{     
  //Your code here
  string ans = "";
  int count = 1;
  char curr = src[0];
  for(int i=1;i<src.size();i++){
      if(src[i]==src[i-1]) count++;
      else{
          ans+=curr+to_string(count);
          curr = src[i];
          count = 1;
      }
  }
  ans+=curr+to_string(count);
  return ans;
}     