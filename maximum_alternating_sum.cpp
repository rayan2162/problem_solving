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
		ll n;
		cin>>n;
		
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
		}
		sort(arr, arr+n);
		
		ll sum = 0;
		if(n%2==0){
			for(ll i=0; i<n; i++){
				if(i<n/2){
					sum -= arr[i]; 
				}else{
					sum += arr[i];
				}
			}
		}else{
			for(ll i=0; i<n; i++){
				if(i<n/2){
					sum -= arr[i];
				}else{
					sum += arr[i];
				}
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}
