#include <iostream>

using namespace std;

int main(){

  int k, l, m, n, d;
  int ans = 0;

  cin>>k>>l>>m>>n>>d;
  ans = d;

  if(k==1 || l==1 || m==1 || n==1){
    cout<<ans;
  }

  else{
    for(int i=1; i<=d; ++i){
      if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
        ans -= 1;
      }
    }
    cout<<ans.;
  }


  return 0;
}
