#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;++i) cin>>a[i];

		bool flag = true;
		for(int j=1;j<n-1;++j){
			int left = -1,right = -1;

			for(int i=0;i<j;++i) if(a[i]<a[j]){
				left = i;
				break;
			}
			for(int k=j+1;k<n;++k) if(a[j]>a[k]){
				right = k;
				break;
			}

			if(left != -1 && right != -1){
				cout<<"YES"<<endl;
				cout<<left+1<<" "<<j+1<<" "<<right+1<<endl;
				flag = false;
				break;
			}

		}

		if(flag) cout<<"NO"<<endl;


	}

	return 0;
}
