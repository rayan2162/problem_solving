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
		ll n, k;
		cin>>n>>k;
		
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
		}
		
		
		if(k>n){
			cout<<n<<endl;
		}else{
//finding if there is k cards available
		sort(arr, arr+n);
		
		ll kcnt = 1;
		vector<ll>v;
		
		for(ll i=1; i<n; i++){
			if(arr[i]==arr[i-1]){
				kcnt++;
			}else{
				v.push_back(kcnt);
				kcnt = 1;
			}
			if(i==n-1){
				v.push_back(kcnt);
				kcnt = 1;
			}
		}
		
		
		
		sort(v.begin(),v.end());
		if(v[sz(v)-1]<k){
			cout<<n<<endl;
		}else{
			cout<<k-1<<endl;
		}


		}
		
	}	

	return 0;
}
