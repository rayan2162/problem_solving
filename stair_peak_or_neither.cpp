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
	ll a,b,c;
	cin>>a>>b>>c;
	if(a<b &&  c>b){
		cout<<"STAIR"<<endl;
	}else if(b>a && b>c){
		cout<<"PEAK"<<endl;
	}else{
		cout<<"NONE"<<endl;
	}
}

	return 0;
}