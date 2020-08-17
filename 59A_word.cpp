#include <iostream>
#include <string.h>

using namespace std;

int main(){

  string str;
  int j = 0;
  int k = 0;

  getline(cin,str);

  for(int i=0; i<str.length(); ++i){

    if((int)str[i]>=65 && (int)str[i]<=90){
      j += 1;
    }

    else if((int)str[i]>=97 && (int)str[i]<=122){
      k += 1;
    }
  }

  if(j>k){
    for(int i=0; i<str.length(); ++i){
      str[i] = toupper(str[i]);
    }
  }

  else{
    for(int i=0; i<str.length(); ++i){
      str[i] = tolower(str[i]);
    }
  }

  cout<<str;

  return 0;
}
