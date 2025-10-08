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

	ll a,b,c;
	cin>>a>>b>>c;
	if((a+b>c) && (b+c>a) && (c+a>b)){
		cout<<"Valid"<<endl;
		ll s = (a+b+c)/2;
		cout<<fixed;
		cout<<setprecision(6);
		cout<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
	}else{
		cout<<"Invalid"<<endl;
	}

	return 0;
}