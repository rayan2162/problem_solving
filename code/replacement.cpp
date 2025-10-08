#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll n;
	cin>>n;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		ll x;
		cin>>x;
		if(x==0){
			arr[i]=0;
		}else if(x>=1){
			arr[i]=1;
		}else{
			arr[i]=2;
		}
	}
	
	for(ll i=0; i<n; i++){
		cout<<arr[i]<<' ';
	}

	return 0;
}