#include <iostream>

using namespace std;

int main(){

  string s = "I hate it";

  int n;

  cin>>n;

  if(n>1){
    for(int i=0; i<n-1; ++i){
      s.replace(7+12*i,s.length(),"that");
      if(i%2==0){
        s.append(" I love it");
      }
      else{
        s.append(" I hate it");
      }
    }
  }

  cout<<s;

  return 0;
}
