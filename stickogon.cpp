#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
//#define push_back pb

#define big long long = 1e18
#define sml long long  = -1e18


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll tc;
cin>>tc;
while(tc--){
	ll n;
	cin>>n;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	
	vector<ll>v;
	ll cnt=1;
	for(ll i=0; i<n-1; i++){
		if(arr[i]==arr[i+1]){
			cnt++;
		}else{
			v.push_back(cnt);
			cnt=1;
		}
		if(i==n-2){
			v.push_back(cnt);	
		}
	}
	
	ll ans=0;
	for(ll i=0; i<sz(v); i++){
		if(v[i]>=3){
			ans = ans + (v[i]/3);
		}
		}
	
		cout<<ans<<endl;
	
}

	return 0;
}
