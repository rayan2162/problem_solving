#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int n;
	cin>>n;
	for(int i=n; i>0; i--){
		for(int j = i; j>0; j--){
			cout<<'*';
		}
		cout<<endl;
	}

	return 0;
}