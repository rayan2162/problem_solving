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
		cin>>arr[i];
	}
	
	ll k;
	cin>>k;
	
	ll trigg = 0;
	for(ll i=0; i<n; i++){
		if(arr[i]==k){
			cout<<i<<endl;
			trigg =1;
			return 0;
		}
	}
	if(trigg ==0){
		cout<<-1<<endl;
	}
}