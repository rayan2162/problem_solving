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

	ll l,r;
	cin>>l>>r;
	if(l>r)swap(l,r);
	l = l-1;
	
	cout<<(r*(r+1)/2) - (l*(l+1)/2)<<endl;
	
	ll l2 = l/2;
	ll r2 = r/2;
	cout<<r2*(r2+1) - l2*(l2+1)<<endl;
	
	
	cout<<((r*(r+1)/2) - (l*(l+1)/2))-(r2*(r2+1) - l2*(l2+1))<<endl;
	

	return 0;
}