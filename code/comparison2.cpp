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
	
	vector<string>v;
	
	if(sz(s)==1){
		cout<<s<<endl;
		return 0;
	}
	
	for(ll i=0; i<sz(s)-1; i++){
		string a;
		string b;
		
		ll j;
		for(j=0; j<=i; j++){
			a.push_back(s[j]);
		}
		
		for(ll k=j; k<sz(s); k++){
			b.push_back(s[k]);
		}
		
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		
		
		for(ll l=0; l<sz(b); l++){
			a.push_back(b[l]);
		}
		
		v.push_back(a);
		
	}
	
	
	sort(v.begin(),v.end());
	cout<<v[0]<<endl;

	return 0;
}
