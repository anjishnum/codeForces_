#include<iostream>
using namespace std;

int main(){

  int n;
  string s;
  int a = 0;
  int d = 0;

  cin>>n;
  cin.ignore();
  getline(cin,s);

  for(int i=0; i<n; ++i){
    if(s[i]=='A'){
      a += 1;
    }
    else{
      d += 1;
    }
  }

  if(a>d){
    cout<<"Anton";
  }

  else if(d>a){
    cout<<"Danik";
  }

  else{
    cout<<"Friendship";
  }

  return 0;
}
