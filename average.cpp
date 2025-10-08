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

	ll tc;
	cin>>tc;

	ll n=tc;
	float sum=0;
	
	while(tc--){
		float x;
		cin>>x;
		sum+=x;
	}
	
	cout<<setprecision(7);
	
string ans = ans + to_string(sum/n);
	
	cout<<ans<<endl;

	return 0;
}