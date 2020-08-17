//// **** COMPLICATED method ****
// #include <iostream>
// #include <utility>
// #include <algorithm>
// using namespace std;
//
// int main(){
//
// 	int n;
//
// 	cin>>n;
//
// 	pair<int, int> pair1[n];
//
//   for(int i=0; i<n; ++i){
// 		pair1[i].second = i+1;
// 		cin>>pair1[i].first;
// 	}
//
// 	sort(pair1, pair1+n);
//
// 	for(int i=0; i<n; ++i){
//
// 			cout<<pair1[i].second<<" ";
//
// 	}
//
//
// 	return 0;
// }


//// **** SIMPLE METHOD ****

#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    int f[n+1]={0};
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        f[p] = i;
    }
    cout << f[1];
    for (int i = 2; i <= n; ++i)
    {
        cout << " " << f[i];
    }
    cout << endl;
    return 0;
}
