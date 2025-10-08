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
	
	ll arr[28]={0};
	for(ll i=0; i<s.size(); i++){
		arr[s[i]-96]++;
		
	}
	for(ll i=1; i<28; i++){
		if(arr[i]!=0){
			cout<<char(i+96)<<" : "<<arr[i]<<endl;
		}
	}

	return 0;
}