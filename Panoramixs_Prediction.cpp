#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;

#define sz(s) ((int)((s).size()))


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll a, b;
	cin>>a>>b;
	
	for(ll i=2; i<=sqrt(b); i++){
		if(b%i==0){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	for(ll i=a+1; i<b; i++){
		for(ll j=2; j<=sqrt(i); j++){
			cout<<i<<' '<<j<<endl;
			if(i%j==0){
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;

	return 0;
}