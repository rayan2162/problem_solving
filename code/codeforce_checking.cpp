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

	string s="codeforces";
	ll tc;
cin>>tc;
while(tc--){
	ll trigg=0;
	char x;
	cin>>x;
	for(ll i=0; i<sz(s); i++){
		if(s[i]==x){
			trigg =1;
			break;
		}
	}
	
	if(trigg){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
}

	return 0;
}