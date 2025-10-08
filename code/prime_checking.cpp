#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;

#define sz(s) ((int)((s).size()))

void prime(ll n){
	bool is_prime = 1;
		for(ll i=2; i<=sqrt(n); i++){
			if(n%i==0){
				is_prime = 0;
				break;
			}
		}
		
		if(n==1){
			cout<<"NO"<<endl;
		}else if(is_prime){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
}


int32_t main()
{
					CODE_STARTS_FROM_HERE

	
	ll tc;
	cin>>tc;
	while(tc--){
		ll n;
		cin>>n;
		prime(n);
	}

	return 0;
}