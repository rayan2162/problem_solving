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

	ll tc;
cin>>tc;

ll arr[30]={0};

ll mx=0;
	
while(tc--){
	string s;
	cin>>s;
	
	for(ll i=0; i<sz(s); i++){
		arr[char(s[i])-64]++;
	}
	

	for(ll i=1; i<=27; i++){
		if(arr[i]>=mx){
			mx=arr[i];
		}
	}
}

	for(ll i=0; i<27; i++){
		if(arr[i]==mx){
			cout<<char(i+64);
		}
	}

	return 0;
}