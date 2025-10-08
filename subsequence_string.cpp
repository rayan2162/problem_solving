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
	
	ll cnt=0;
	
	for(ll i=0;i<s.size(); i++){
		
		if(s[i]=='h' && cnt==0){
			cnt++;
		}
		else if(s[i]=='e' && cnt==1){
			cnt++;
		}
		else if(s[i]=='l' && cnt==2){
			cnt++;
		}
		else if(s[i]=='l' && cnt==3){
			cnt++;
		}
		else if(s[i]=='o' && cnt==4){
			cnt++;
		}
		
		//cout<<s[i]<<' '<<cnt<<endl;
	}
	
	if(cnt==5){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}