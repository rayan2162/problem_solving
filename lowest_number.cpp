#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll n;
	cin>>n;
	ll m= INT_MAX;
	ll pos=0; 
	for(ll i=1; i<=n; i++){
		ll x;
		cin>>x;
		if(x<m){
			m = x;
			pos=i;
		}
	}
	cout<<m<<" "<<pos<<endl;

	return 0;
}