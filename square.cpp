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
	ll a1, a2;
	ll b1, b2;
	ll c1, c2;
	ll d1, d2;
	
	ll e,f;
	
	cin >> a1 >> a2;
	cin >> b1 >> b2;
	cin >> c1 >> c2;
	cin >> d1 >> d2;
	
	if(a1!=b1){
		if(a1<b1)swap(a1,b1);
		
		e = a1-b1;
	}else if(a1!=c1){
		if(a1<c1)swap(a1,c1);
		
		e = a1-c1;
	}
	
	if(a2!=b2){
		if(a2<b2)swap(a2,b2);
		
		f = a2-b2;
	}else if(a2!=c2){
		if(a2<c2)swap(a2,c2);
		
		f = a2-c2;
	}
	
	cout<<e*f<<endl;
}

	return 0;
}