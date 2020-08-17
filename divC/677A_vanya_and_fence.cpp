#include <iostream>
#include <vector>

using namespace std;

int main(){

  int n, h;
  int wid = 0;

  cin>>n>>h;

  vector <int> a(n);

  for(int i=0; i<n; ++i){
    cin>>a[i];
  }

  for(int i=0; i<n; ++i){
    if(a[i]<=h){
      wid += 1;
    }
    else{
      wid += 2;
    }
  }

  cout<<wid;


  return  0;
}
