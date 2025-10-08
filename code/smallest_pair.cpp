#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll tc;
	cin>>tc;
	while(tc--){
		ll n;
		cin>>n;
	
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
			}	
	
		ll cnt=0;
		vector<long long>v;
	
		for(ll i=0; i<n-1; i++){
			for(ll j=i+1; j<n; j++){
				v.push_back((arr[i]+arr[j])+((j+1)-(i+1)));
				}
			}
		
		sort(v.begin(), v.end());

		cout<<v[0]<<endl;
		}


	return 0;
}