#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define pb push_back

#define big long long = 1e18
#define sml long long  = -1e18
const ll mod = 1e9+7;


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll tc;
	cin>>tc;
	
	while(tc--){
		ll n,m;
		cin>>n>>m;
		
		char arr[n];
		ll alp[7]={ };
		for(ll i=0; i<n; i++){
			 cin>>arr[i];
			 int val = arr[i]-65;
			 alp[val]++;
		}
		ll cnt=0;
		for(ll i=0; i<7; i++){
			if(alp[i]<m){
				ll x = m-alp[i];
				cnt += x;
			}
		}
		cout<<cnt<<endl;
		
	}

	return 0;
}
