#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;



int32_t main()
{
					CODE_STARTS_FROM_HERE

	string s;
	cin>>s;
	
	for(ll i=0; i<s.size(); i++){
		if(s[i]>='a' && s[i]<='z'){
			char c=toupper(s[i]);
			cout<<c;
		}else if(s[i]>='A'&&s[i]<='Z'){
			char c=tolower(s[i]);
			cout<<c;
		}else{
			cout<<' ';
		}
	}

	return 0;
}