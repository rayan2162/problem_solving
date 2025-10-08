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

	ll l,r,m;
	cin>>l>>r>>m;
	
	vector<string>hsh;
	hsh[1]="1";
	for(ll i=2; i<=r; i++){
		hsh[i]=to_string(stoi(hsh[i-1])*i);
	}


//(a x b) mod m = ((a mod m) x (b mod m)) mod m	
	cout<<stoi(hsh[r])%m<<endl;

	return 0;
}