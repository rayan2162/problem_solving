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

	ll n, k;
	cin>>n>>k;
	vector<ll>v;
	for(ll i=0; i<n; i++){
		ll x;
		cin>>x;
		v.push_back(x);
	}
	
	sort(v.begin(), v.end());
	while(k--){
		ll x;
		cin>>x;	if(binary_search(v.begin(),v.end(),x)){
			//cout<<x<<endl;
			cout<<"found"<<endl;
		}else{
			//cout<<x<<endl;
			cout<<"not found"<<endl;
		}
	}

	return 0;
}