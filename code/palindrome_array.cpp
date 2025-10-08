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
	
	for(ll i=0; i<n/2; i++){

		if(arr[i]!=arr[(n-1)-i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;

	return 0;
}