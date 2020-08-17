#include <iostream>

using namespace std;

int main(){

  string s1 = "";
  string s2 = "";
  int a[100] = {0};

  getline(cin,s1);

  getline(cin,s2);

  for(int j=0; j<s1.length(); ++j){
    if(s1[j]!=s2[j]){
      a[j] = 1;
    }
    else{
      a[j] = 0;
    }
  }

  for(int j=0; j<s1.length(); ++j){
    cout<<a[j];
  }

  return 0;
}
