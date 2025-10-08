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
		
		ll a,b,c;
		cin>>a>>b>>c;
		
		if(a+b+c == 0){
			cout<<0<<endl;
		}else if(a==b && a==c){
			cout<<-1<<endl;
		}else if(a==0 || b==0){
			if((c-(a+b))%2!=0){
				cout<<-1<<endl;
			}else{
				cout<<a+b<<endl;
			}
		}else if(a+b<c){
			cout<<a+b<<endl;
		}else{
			ll rem = b - a;
			ll rem2 = c - a;
			cout<<rem + rem2 + a<<endl;
		}
	}

	return 0;
}
