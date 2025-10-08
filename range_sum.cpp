#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll tc;
	ll a,b;
cin>>tc;
while(tc--){
	cin>>a>>b;
	unsigned long long ans=0;
	for(ll i =a; i<=b; i++){
		ans=ans+i;
	}
	cout<<ans<<endl;
}

	return 0;
}