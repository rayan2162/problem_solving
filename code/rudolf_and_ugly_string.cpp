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
while(tc--){
	
	ll n;
	cin>>n;
	
	string s;
	cin>>s;
	
	if(n<3){
		cout<<0<<endl;
	}else if(n==3){
		if(s=="map" || s=="pie"){
			cout<<1<<endl;
		}else{
			cout<<0<<endl;
		}
	}else{
		ll cnt=0;
		for(ll i=0; i<n-2; ++i){
			if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
				cnt++;
				i+=3;
			}
			if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
				cnt++;
				i+=3;
			}
		}
		cout<<cnt<<endl;
	}
}

	return 0;
}