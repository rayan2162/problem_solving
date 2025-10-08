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

	ll tc;
cin>>tc;
while(tc--){
	string s;
	cin>>s;
	
	string ss;
	cin>>ss;
	
	
	ll m;
	ll slt;
	if(s.size()>ss.size()){
		m=ss.size();
		slt=2;
	}else{
		m=s.size();
		slt=1;
	}
	
	for(ll i=0; i<m; i++){
		cout<<s[i]<<ss[i];
	}
	
	if(s.size()!=ss.size()){
	if(slt==1){
		for(ll i=m; i<ss.size(); i++){
			cout<<ss[i];
		}
	}else{
		for(ll i=m; i<s.size(); i++){
			cout<<s[i];
		}
	}
}
cout<<endl;
}



	return 0;
}