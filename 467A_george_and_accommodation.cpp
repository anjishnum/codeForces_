#include <iostream>
#include <string.h>

using namespace std;

int main(){

  int n;
  int p,q;
  int ans = 0;

  cin>>n;

  for(int i=0; i<n; ++i){
    cin>>p>>q;
    if(q-p>=2){
      ans+=1;
    }
  }

  cout<<ans;

  return 0;
}
