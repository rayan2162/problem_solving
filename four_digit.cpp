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

	ll n;
	cin>>n;
	if(n>=0 && n<=9){
		cout<<"000"<<n<<endl;
	}else if(n>9 && n<=99){
		cout<<"00"<<n<<endl;
	}else if(n>99 && n<=999){
		cout<<"0"<<n<<endl;
	}else{
		cout<<n<<endl;
	}

	return 0;
}