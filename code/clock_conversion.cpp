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

	ll tc;
cin>>tc;
while(tc--){
	
	string s;
	cin>>s;
	
	ll n = s.size();
	
	ll a,b,c;
	a=s[0]-'0';
	b=s[1]-'0';
	c = (a*10)+b;
	
	ll d = c - 12;
	
	if(c==0){
		cout<<"12";
		for(ll i=2; i<n; i++){
			cout<<s[i];
		}
		cout<<" AM"<<endl;
	}else if(c>=1 && c<=9){
		cout<<"0";
		for(ll i=1; i<n; i++){
			cout<<s[i];
		}
		cout<<" AM"<<endl;
	}else if(c>=10 && c<=11){
		cout<<s<<" AM"<<endl;
	}else if(c==12){
		cout<<s<<" PM"<<endl;
	}else if(c>=13 && c<=21){
		cout<<"0"<<d;
		for(ll i=2; i<n; i++){
			cout<<s[i];
		}
		cout<<" PM"<<endl;
	}else if(c>=22 && d<=23){
		cout<<d;
		for(ll i=2; i<n; i++){
			cout<<s[i];
		}
		cout<<" PM"<<endl;
	}
	
	
	
	
	
	
	
	}

	return 0;
}