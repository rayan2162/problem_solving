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
	cin>>s;
	string ss;
	for(ll i=0; i<sz(s); i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
			ss.push_back(' ');
			i=i+2;
		}else{
			ss.push_back(s[i]);
		}
	}
	
	ll pos;
	for(ll i=0; i<sz(ss); i++){
		if(ss[i]>='A' && ss[i]<='Z'){
			pos=i;
			break;
		}
	}
	
	
	for(ll i=pos; i<sz(ss)-1; i++){
		if(ss[i]==' '&& ss[i+1]==' '){
			cout<<' ';
			i  = i+1;
		}else{
			cout<<ss[i];
		}
	}
	
	if(ss[sz(ss)-1]!=' '){
		cout<<ss[sz(ss)-1];
	}

	return 0;
}