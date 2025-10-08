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
		string s;
		cin>>s;
		string ss = s;
		sort(ss.begin(), ss.end());
		if(s==ss) cout<<1<<endl;
		else if(sz(s)==3 || sz(s)==2)cout<<2<<endl;
		else{
				ll cnt = 0;
				vector<ll>v;
				for(ll i=0; i<sz(s)-1; i++){
					if(s[i]=='1' && s[i]==s[i+1])cnt++;
					else{
						v.pb(cnt);
						cnt = 0;
					}
					if(i==sz(s)-1)
						v.pb(cnt);
					}
					cout<<sz(v)<<endl;
		}
	}

	return 0;
}
