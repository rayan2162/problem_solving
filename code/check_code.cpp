#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll a,b;
	cin>>a>>b;
	
	string s;
	cin>>s;
	
	for(ll i=0; i<s.size(); i++){
		if(i!=a && s[i]=='-'){
			cout<<"No"<<endl;
			return 0;
		}
	}
	
	if(s.size()==(a+b+1)){
		if(s[a]=='-'){
			cout<<"Yes"<<endl;
			return 0;
		}else{
			cout<<"No"<<endl;
			return 0;
		}
	}else{
			cout<<"No"<<endl;
			return 0;
		}

}