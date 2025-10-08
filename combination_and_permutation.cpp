#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;

#define sz(s) ((int)((s).size()))


ll combination(ll n, ll r){
	ll tn = 1;
	for(ll i=1; i<=n; i++){
		tn = tn * i; 
	}

	ll tr = 1;
	for(ll i=1; i<=r; i++){
		tr = tr * i; 
	}
	
	ll nr = n-r;
	ll tnr = 1;
	for(ll i=1; i<=nr; i++){
		tnr = tnr * i; 
	}
	
	return tn/(tr*tnr);
	
}

ll permutation(ll n, ll r){
	ll tn = 1;
	for(ll i=1; i<=n; i++){
		tn = tn * i; 
	}
	
	ll nr = n-r;
	ll tnr = 1;
	for(ll i=1; i<=nr; i++){
		tnr = tnr * i; 
	}
	
	return tn/tnr;
	
}

int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll n,r;
	cin>>n>>r;
	
	cout<<combination(n,r)<<' '<<permutation(n,r);
	

	return 0;
}