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

	ll n;
	cin>>n;
	
	string s;
	cin>>s;
	
	string ss;
	
	ll scr=0;
	for(ll i=0; i<n-1; i++){
		
		if(s[i]=='V'){
			scr=scr+5;
		}
		if(s[i]=='W'){
			scr=scr+2;
		}
		if(s[i]=='X'){
			s.erase(s.begin() + i+1);
			cout<<s<<endl;
		}
		if(s[i]=='Y'){
			ss=ss+s[i];
		}
		if(s[i]=='Z'){
			
			if(s[i+1]=='V'){
				scr=int(scr/5.0);
				if(s[i+2]=='V'){
					s.erase(s.begin() + i+2);
			cout<<s<<endl;
					}
				if(s[i+2]=='W'){
					s.erase(s.begin() + i+2);
			cout<<s<<endl;
					}
			}
			
			if(s[i+1]=='W'){
				scr=int(scr/2.0);
			if(s[i+2]=='V'){
					s.erase(s.begin() + i+2);
			cout<<s<<endl;
					}
				if(s[i+2]=='W'){
					s.erase(s.begin() + i+2);
			cout<<s<<endl;
					}
			}
			
		}
		
		//cout<<i<<' '<<s[i]<<' '<<scr<<endl;
	}
	
	if(s[n-1]=='V'){
		scr=scr+5;
	}
	if(s[n-1]=='W'){
		scr=scr+2;
	}
	
	cout<<scr<<endl;

	return 0;
}