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
	
	ll cnte=0;
	ll cntg=0;
	ll cnty=0;
	ll cntp=0;
	ll cntt=0;
	ll t=0;
	
	sort(s.begin(),s.end());
	for(ll i=0; i<sz(s); i++){
		if(s[i]=='E' || s[i]=='e'){
			cnte++;
		} 
		if(s[i]=='G' || s[i]=='g'){
			cntg++;
		}
	 	if(s[i]=='Y' || s[i]=='y'){
			cnty++;
		}
	 	if(s[i]=='P' || s[i]=='p'){
			cntp++;
		}
	 	if(s[i]=='T' || s[i]=='t'){
			cntt++;
		}
	}
	cout<<min({cnte,cntg,cnty,cntp,cntt})<<endl;

	return 0;
}