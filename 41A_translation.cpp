#include <iostream>
#include <string.h>

using namespace std;

int main(){

  string str = "";
  string str2 = "";
  char tmp;

  getline(cin, str);
  getline(cin, str2);

  int j = str.length() - 1;


  for(int i=0; i<str.length()/2; ++i){
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    j -= 1;
  }


  if(str==str2){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }


  return 0;
}
