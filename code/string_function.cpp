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

	ll n, tc;
	cin>>n>>tc;
	
	string s;
	cin>>s;
	
	while(tc--){
		string ss;
		getline(cin,ss);
		//cin.ignore();
		cout<<ss;
		
		if(ss[0]=='p'){
			if(ss[1]=='o'){
				s.pop_back();
			}else if(ss[1]=='u'){
				s.push_back(char(ss[9]));
			}
			
		}
		
	}

	return 0;
}