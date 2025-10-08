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
	string ss;
	
	cin>>s;
	cin>>ss;
	
	cout<<s.size()<<" "<<ss.size()<<endl;
	
	cout<<s+ss<<endl;
	
	cout<<ss[0];
	for(ll i=1; i<s.size(); i++){
		cout<<s[i];
	}
	cout<<" ";
	
	cout<<s[0];
	for(ll i=1; i<ss.size(); i++){
		cout<<ss[i];
	}

	return 0;
}