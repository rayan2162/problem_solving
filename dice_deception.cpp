#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define push_back pb

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
		sort(arr, arr+n);
		for(ll i=0; i<k; i++){
			if(arr[i]>3){
				break;
			}
			if(arr[i]==1)arr[i]=6;
			else if(arr[i]==2)arr[i]=5;
			else if(arr[i]==3)arr[i]=4;
		}
		
		ll sum = 0;
		for(ll i=0; i<n; i++){
			sum = sum + arr[i];
		}
		
		cout<<sum<<endl;
	}

	return 0;
}
