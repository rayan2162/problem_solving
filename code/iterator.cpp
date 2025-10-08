#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define pb push_back

#define big long long = 1e18
#define sml long long  = -1e18
const ll mod = 1e9+7;


int32_t main()
{
					CODE_STARTS_FROM_HERE
					
	vector <ll> :: iterator it;

	vector <ll> v = {1,2,3,4,5};
	
	//printing values
	for(it=v.begin(); it!=v.end(); it++){
		cout<<*it<<' ';
	}cout<<endl;

	return 0;
}
