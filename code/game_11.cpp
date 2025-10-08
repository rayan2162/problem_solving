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
		
		ll bat[n];
		for(ll i=0; i<n; i++){
			cin>>bat[i];
			
		}
		sort(bat, bat+n, greater<ll>());
		
		ll ball[m];
		for(ll i=0; i<m; i++){
			cin>>ball[i];
		}
		sort(ball, ball+m, greater<ll>());
		
		if(n<4){
			cout<<-1<<endl;
		}else if(m<4){
			cout<<-1<<endl;
		}else if(m<6 && n<6){
			cout<<-1<<endl;
		}else{
			ll sum = 0;
			for(ll i=0; i<4; i++){
					sum += bat[i];
					sum += ball[i];
			}
			
			vector<ll>v;
			for(ll i=4; i<n; i++){
				v.push_back(bat[i]);
			}
			for(ll i =4; i<m; i++){
				v.push_back(ball[i]);
			}
			
sort(v.begin(), v.end(), greater<ll>());

			for(ll i=0; i<3; i++){
				sum +=  v[i];
			}
			
			cout<<sum<<endl;
		}
	}
}
