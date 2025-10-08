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

	ll n,k;
	cin>>n>>k;
	ll tmpk = k;

	ll cnt =0;
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"a"<<' '<<"t"<<' '<<"c"<<endl;
	for(ll i=0; i<n; i++){
cout<<arr[i]<<' '<<tmpk<<' '<<cnt<<endl; 
		if(arr[i]==k){
			cnt ++;
			tmpk = k;
		}else if(arr[i]==tmpk){
			cnt++;
			tmpk = k;
		}else if(arr[i]>tmpk){
			cnt++;
			tmpk = k;
			tmpk -= arr[i];
		}else{
			tmpk -= arr[i];
		}
cout<<arr[i]<<' '<<tmpk<<' '<<cnt<<endl<<endl;
	}
	cout<<cnt<<endl;
	return 0;
}
