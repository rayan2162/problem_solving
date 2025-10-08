#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll n;
	cin>>n;
	ll t=0;
	for(ll i=0; i<n; i++){
		ll x;
		cin>>x;
		t=t+x;
	}
	cout<<abs(t)<<endl;

	return 0;
}