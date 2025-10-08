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
	ll n;
	cin>>n;
	ll nn=n;
	bool is_binary=1;
	while(nn){
		if((nn%10)!=0 || (nn%10)!=1){
			is_binary=0;
			break;
		}
		nn=nn/10;
	}
	
	
	if(is_binary){
		cout<<"YES"<<endl;
	}
	
	
}

	return 0;
}