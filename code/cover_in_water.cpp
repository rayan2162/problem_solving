#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))


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
		
		ll dcnt = 0;
		ll hcnt = 0;
		ll cnt = 0;
		vector <ll> v;
		
		char arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
		
			if(arr[i]=='.')dcnt++;
			if(arr[i]=='#')hcnt++;
			if(arr[i]=='.')cnt++;
			
			if(arr[i]!='.' && cnt>0){
				v.push_back(cnt);
				cnt=0;
			}
			if(i==n-1 && cnt>0){
				v.push_back(cnt);
			}
			
		}
		
		sort(v.begin(), v.end());
		
		ll ans = 0;
		ll is_greater_2 = 0;
		
		for(ll j=0; j<sz(v); j++){
			if(v[j]>2){
				is_greater_2 = 1;
			}else{
				ans=ans+v[j];
			}
		}
if(n==1 && arr[0]=='.')cout<<1<<endl;
else if(n==1 && arr[0]=='#')cout<<0<<endl;
else if(dcnt==n)cout<<2<<endl;
else if(hcnt==n)cout<<0<<endl;
else if(is_greater_2)cout<<2<<endl;
else cout<<ans<<endl;

	}

	return 0;
}
