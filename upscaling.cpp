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
	ll r=1;
	float rf=0;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			for(ll k=0; k<2; k++){
				if(r%2!=0){
					cout<<"# ";
					rf = rf +0.5;
					r = r + rf;
				}
				else{
					cout<<". ";
					rf = rf +0.5;
					r = r + rf;
				}
				if(rf==1){
					rf=0;
				}
			}
		}
		cout<<endl;
	}
}

	return 0;
}