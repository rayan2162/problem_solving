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
		ll a, b, c, d;
		cin>>a>>b>>c>>d;

//cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<endl;
		
		ll temp = a;
		a = min(a,b);
		b = max(temp,b);
		temp = c;
		c = min(c,d);
		d = max(temp,d);
		
//cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<endl;		
		 
		if(((a>=c && a<=d) && (b<c && b<d))||((a>=c && a<=d) && (b>c && b>d))){
			cout<<"YES"<<endl;
		}else if(((b>=c && b<=d) && (a<c && a<d)) || ((b>=c && b<=d) && (a>c && a>d))){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
