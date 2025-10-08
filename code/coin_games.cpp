#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
//#define push_back pb

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
		
		char arr[n];
		vector<ll>v;
		
		ll cnt = 0;
		ll ucnt =0;
		
		for(ll i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]=='U'){
				v.push_back(1);
				ucnt++;
			}else{
				v.push_back(0);
				cnt++;
			}
		}
		
		if(n==1){
			if(v[0]==1){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else if(cnt==n){
			cout<<"NO"<<endl;
		}else if(ucnt%2!=0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}

	return 0;
}
