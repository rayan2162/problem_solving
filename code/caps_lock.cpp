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
	
	if(sz(s)==1){
		if(s[0]>='a' && s[0]<='z'){	cout<<char(toupper(s[0]))<<endl;
			return 0;
		}
	}
	
	string ss;
	ss = s;

	transform(ss.begin(), ss.end(), ss.begin(), ::toupper);

	if(s==ss){
		transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
		cout<<ss<<endl;
		return 0;
	}
	
	
	if(s[0]>='a' && s[0]<='z'){
		ll trigg =0;
		for(ll i=1; i<sz(s); i++){
			if(s[i]>='A' && s[i]<='Z'){
				trigg++;
			}
		}
		
		if(trigg==sz(s)-1){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout<<char(toupper(s[0]));
		for(ll i=1; i<sz(s); i++){
			cout<<s[i];
		}
		return 0;
	}
	}
	
	
	cout<<s<<endl;
	
	
	
	
	return 0;
}