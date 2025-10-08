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
	
	string ss;
	cin>>ss;
	
	string select;
	ll sz;
	ll cnt=0;
	
	if(s==ss){
		cout<<s<<endl;
		return 0;
	}else{
		
		if(s.size()>ss.size()){
			sz=ss.size();
			select = ss;
			
		}else{
			sz=s.size();
			select= s;
			
		}
		
		for(ll i=0; i<sz; i++){
			if(s[i]==ss[i]){
				cnt++;
			}
			if(s[i]>ss[i]){
				cout<<ss<<endl;
				return 0;
			}else if(s[i]<ss[i]){
				cout<<s<<endl;
				return 0;
			}
		}
	}
	
	if(cnt==sz){
		cout<<select<<endl;
	}
	
	

	return 0;
}