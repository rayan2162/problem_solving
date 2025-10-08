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
		string ss =s;
		ll trigg = 0;
		for(ll i=1; i<sz(s); i++){
			if(s[0]!=s[i]){
				trigg++;
			}
		}
		if(trigg){
			cout<<"YES"<<endl;
			sort(s.begin(), s.end());
			if(ss != s){
				cout<<s<<endl;
			}else{
				sort(s.begin(), s.end(), greater<char>());
				cout<<s<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
