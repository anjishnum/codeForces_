#include <iostream>
#include <vector>

using namespace std;

int main(){

  long long int n;
  long long int sum = 1;

  cin>>n;

  vector <int> a(n);

  for(int i=0; i<n; ++i){
    cin>>a[i];
  }

  if(n>1){
    for(int i=1; i<n; ++i){
      if(a[i]!=a[i-1]){
        sum += 1;
      }
    }
  }

  cout<<sum;

  return 0;
}
