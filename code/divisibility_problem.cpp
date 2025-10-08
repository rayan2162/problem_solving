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
while(tc--){
	ll a,b;
	cin>>a>>b;
	if(a%b==0){
		cout<<0<<endl;
	}else if(b>a){
		cout<<b-a<<endl;
	}else{
		ll c = a%b;
	cout<<b-c<<endl;
	}
	
	
}

	return 0;
}