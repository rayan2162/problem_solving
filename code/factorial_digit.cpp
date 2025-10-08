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
	ll fact = 1;
	for(ll i=1; i<=n; i++){
		fact = fact * i;
	}
	
	ll digit=0;
	while(fact){
		fact = fact / 10;
		digit++;
	}
	
	cout<<"Number of digits of "<<n<<"! is "<<digit<<endl;

	return 0;
}