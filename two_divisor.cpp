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
	ll a,b;
	cin>>a>>b;
	
	ll mx=max(a,b);
	ll mn=min(a,b);
	
	if(a==1 || b==1){
		cout<<mx*mx<<endl;
	}else if(a%2==0 && b%2==0){
		cout<<mx*2<<endl;
	}else if(a%3==0 && b%3==0){
		cout<<mn*3<<endl;
	}else if(mx%mn!=0){
		cout<<a*b<<endl;
	}else{
		ll d = mx/mn;
		cout<<mx*d<<endl;
	}
	
}

	return 0;
}