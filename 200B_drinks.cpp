#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int n;

  cin>>n;

  double p[n];
  double vol = 0;

  for(int i=0; i<n; ++i){
    cin>>p[i];
    vol += p[i];
  }

  cout<<setprecision(14)<<vol/n;

  return 0;
}
