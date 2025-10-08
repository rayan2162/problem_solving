#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;



int32_t main()
{
					CODE_STARTS_FROM_HERE

	string s;
	cin>>s;
	
	ll t=0;
	for(ll i=0; i<s.size(); i++){
		ll x= s[i]-'0';
		t = t+x;
	}
	
	cout<<t<<endl;

	return 0;
}