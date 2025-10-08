#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define push_back pb

#define big long long = 1e18
#define sml long long  = -1e18


int32_t main()
{
					CODE_STARTS_FROM_HERE

		ll tc;
	cin>>tc;
	
	while(tc--){
		ll x;
		cin>>x;
		if(x%3==0)cout<<"Second"<<endl;
		else cout<<"First"<<endl;
	}

	return 0;
}
