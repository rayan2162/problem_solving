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
	ll n,a,b;
	cin>>n>>a>>b;
	
	ll c = min(a*2, b);
	
	if(c==a*2){
		cout<<a*n<<endl;
	}else{
		if(n%2==0){
			n = n/2;
			cout<<b*n<<endl;
		}else{
			n = n/2;
			cout<<(b*n)+a<<endl;
		}
	}
}
	

	return 0;
}