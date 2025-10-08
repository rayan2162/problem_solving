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
	
	if(n==1){
		cout<<a<<endl;
	}else if(n==2){
		cout<<b<<endl;
	}else{
		cout<<(a^b);
	}
	

	return 0;
}