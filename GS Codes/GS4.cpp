string encode(string src)
{     
  //Your code here 
   string temp="";
  int c=1;
  temp+=src[0];
  for(int i=1;i<src.size();i++){
      if(src[i]==src[i-1]){
          c++;
      }else{
          temp+=to_string(c);
          temp+=src[i];
          c=1;
      }
  }
  temp+=to_string(c);
  return temp;
}     
 
 