#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define push_back pb

#define big long long = 1e18
#define sml long long  = -1e18
const ll mod = 1e9+7;


int32_t main()
{
					CODE_STARTS_FROM_HERE

	string s; 
	string ss;
	cin>>s;
	cin>>ss;
	
	ll k = 0;
	for(ll i=0; i<sz(s); i++){
		for(ll j=k; j<sz(ss); j++){
			if(s[i]==ss[j]){
				cout<<j+1<<' ';
				k = j;
				i++;
			}
		}
	}

	return 0;
}
