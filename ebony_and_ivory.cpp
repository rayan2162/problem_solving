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

	ll e,i,s;
	cin>>e>>i>>s;
	
	for(ll k=0; k<=s; k=k+e){
		for(ll j=0; j<=s; j=j+i){
			if(k+j==s){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}
	
	cout<<"No"<<endl;
	

	return 0;
}