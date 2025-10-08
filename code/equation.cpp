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

	ll b,p;
	cin>>b>>p;
	
	ll sum =0;
	
	if(p==0 || p==1){
		if(b==0){
			cout<<-1<<endl;
		}else{
			cout<<0<<endl;
		}
	}else{
		for(ll i=2; i<=p; i++){
			if(i%2==0){
				sum = sum + pow(b,i);
			}	
		}
		cout<<sum<<endl;
	}
	
	return 0;
}