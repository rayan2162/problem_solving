#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=n-i; j>0; j--){
			cout<<' ';
		}
		for(int k=0; k<i; k++){
			cout<<"*";
		}
		for(int k=i-1; k>0; k--){
			cout<<"*";
		}


		cout<<endl;
	}

	for(int i = 0; i<=n; i++){
		for(int j=0; j<i; j++){
			cout<<' ';
		}
		for(int k=n; k>i+1; k--){
			cout<<'*';
		}
		for(int l = n; l>i; l--){
			cout<<'*';
		}

		cout<<endl;
	}

	return 0;
}