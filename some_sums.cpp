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

	ll n, a,b;
	cin>>n>>a>>b;
	
	ll sum=0;
	for(ll i=1; i<=n; i++){
		ll x = i;
		ll temp = 0;
			
			while(x){
				temp += x%10;
				x = x/10;
			}
			if(temp>=a && temp<=b){
			sum += i;
		}
		
//cout<<i<<' '<<sum<<' '<<temp<<endl;
	}
	
	cout<<sum<<endl;

	return 0;
}