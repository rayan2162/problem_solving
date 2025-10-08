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
		
		ll is_same = 1;
		for(ll i=1; i<n; i++){
			if(arr[i-1]!=arr[i]){
				is_same = 0;
				break;
			}
		}
		
		sort(arr, arr+n);
		
		vector<ll>v;
		ll cnt = 1;
		for(ll i=1; i<n; i++){
			if(arr[i-1]==arr[i]){
				cnt++;
			}else{
				v.push_back(cnt);
				cnt = 1;
			}
			if(i==n-1){
				v.push_back(cnt);
			}
		}
		
		if(n==2){
			cout<<"YES"<<endl;
		}else if(is_same){
			cout<<"YES"<<endl;
		}else if(sz(v)==2){
if(v[0]==v[1] || v[0]==v[1]-1 || v[0]-1==v[1]){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}	

	return 0;
}
