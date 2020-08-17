#include <iostream>

using namespace std;

int main(){

  int y;
  int x;
  string s;

  cin>>y;

  x = y+1;

  s = "";
  s.append(to_string(x));

  int f = 0;

  while(f==0){

    if(s[0]==s[1]){
      x += 100;
      x /= 100;
      x *= 100;
    }
    else if(s[1]==s[2] || s[0]==s[2]){
      x += 10;
      x /= 10;
      x *= 10;
    }
    //cout<<x<<" ";
    if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
      f = 1;
    }
    else{
      s = "";
      s.append(to_string(x));
      x += 1;
    }
  }

  cout<<s;



  return 0;
}
