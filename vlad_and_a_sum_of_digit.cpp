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

	ll n;
	cin>>n;
	ll tc[n];
	ll mx= -1e18;
	for(ll i=0; i<n; i++){
		cin>>tc[i];
		if(tc[i]>mx){
			mx=tc[i];
		}
	}
	
	ll ps[mx+1];
	
	for(ll i=1; i<=mx; i++){
		ll x = i;
		ll sum = 0;
			while(x>0){
				sum = sum +(x%10);
				x = x / 10;
			}
		ps[i]=sum;
	}
	
	for(ll i=2; i<=mx; i++){
		ps[i]=ps[i]+ps[i-1];
	}
	
	for(ll i=0; i<n; i++){
		cout<<ps[tc[i]]<<endl;
	}

	return 0;
}