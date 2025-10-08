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

	string s;
	cin>>s;
	
	ll cnt=0;
	int t=0;
	ll trigg =1;
	if(sz(s)<=1){
		cout<<0<<endl;
		return 0;
	}
	while(trigg){
		for(ll i=0; i<sz(s); i++){
			t = t + (s[i]-'0');
		}
		s = to_string(t);
		cnt++;
		if(t<=9){
			trigg=0;
		}
		t = 0;
	}

cout<<cnt<<endl;

	return 0;
}