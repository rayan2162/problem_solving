#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;

#define sz(s) ((int)((s).size()))


int is_palindrome(string s){
	string ss = s;
	reverse(ss.begin(), ss.end());
	if(ss==s){
		return 1;
	}else{
		cout<<"NO"<<endl;
		return 0;
	}
}

int is_wonderful_num(ll n){
	if(n%2!=0){
		char arr[33];
		itoa(n,arr,2);
		
		string s=arr;
		is_palindrome(s);
		}else{
			cout<<"NO"<<endl;
			return 0;
		}
		
}

int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll n;
	cin>>n;
	
	if(is_wonderful_num(n)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	

	return 0;
}