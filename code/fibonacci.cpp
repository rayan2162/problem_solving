#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll n;
	cin>>n;
	
	ll a=1, b=0, temp=0;
	for(ll i=0; i<n-1; i++){
		temp = b;
		b = a + temp; 
		a = temp;
	}
	cout<<b;
	

	return 0;
}