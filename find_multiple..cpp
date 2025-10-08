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
	
	ll d = a/c;
	if((d+1)*c>a && (d+1)*c<b){
		cout<<(d+1)*c<<endl;
	}else if((d+2)*c>a && (d+2)*c<b){
		cout<<(d+2)*c<<endl;
	}else if((d+3)*c>a && (d+3)*c<b){
		cout<<(d+3)*c<<endl;
	}else if((d+4)*c>a && (d+4)*c<b){
		cout<<(d+4)*c<<endl;
	}else{
		cout<<-1<<endl;
	}

	return 0;
}