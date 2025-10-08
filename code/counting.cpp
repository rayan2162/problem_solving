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

	ll a,b;
	cin>>a>>b;
	if(a>b){
		cout<<0<<endl;
		return 0;
	}
	
	cout<<b-a+1<<endl;

	return 0;
}