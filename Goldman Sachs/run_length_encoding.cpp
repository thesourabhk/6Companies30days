// this is an another type of sliding window with variable window size format where the window is sliding till start and end elements are the same. once it
// changes the value of start and end are updated.
string encode(string src)
{     
  //Your code here 
  string ans="";
  for(int i=0,j=0;j<(int)src.length();){
      while(src[i]==src[j])
        j++;
    ans+= src[i]+to_string(j-i);
    i=j;
  }
  return ans;
}   
