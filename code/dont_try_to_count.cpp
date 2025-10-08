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
		ll n,m;
		cin>>n>>m;
		
		string x,s;
		cin>>x;
		cin>>s;
		
		string xx = x;
		while(sz(xx)<=25){
			xx = xx+xx;
		}
		ll pos = xx.find(s);
			
		if(pos==-1){
			cout<<pos<<endl;
		}else if(s==x){
			cout<<0<<endl;
		}else if(x.find(s) != std::string::npos){
			cout<<0<<endl;
		}else{
			ll ii =0;
			while(sz(x)<=25){
				x = x+x;
				ii++;
				if(x.find(s) != std::string::npos){
					cout<<ii<<endl;
					break;
				}
			}
		}
	}

	return 0;
}
