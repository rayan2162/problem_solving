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

	ll a,b,n;
	cin>>a>>b>>n;
	
	ll t=0;
	ll trigg=1;
	ll pos=0;
	while(trigg==1){
		if(a%n==0){
			pos=a;
			trigg=0;
		}
		else{
			a++;
		}
	}
	
	while(pos<=b){
		t = t + pos;
		pos = pos + n;
	}
	
	cout<<t<<endl;
	

	return 0;
}