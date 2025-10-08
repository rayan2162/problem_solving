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

	string s;
	string ss;
	cin>>s;
	
	ll pos=0;
	
	for(ll i=0; i<sz(s); i++){
		if(s[i]=='.'){
			pos=i;
			break;
		}else{
			ss.push_back(s[i]);
		}
		
	}
	if((s[pos+1]-'0')>=5){
		cout<<(stoi(ss)+1)<<endl;
	}else{
		cout<<stoi(ss)<<endl;
	}

	return 0;
}