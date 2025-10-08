#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll n, k;
	cin>>n>>k;
	
	ll m=INT_MAX;
	ll temp = k;
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
		temp--;
		
		if(arr[i]<=m){
			m = arr[i];
		}
		
		if(temp==0){
			temp = k;
			cout<<m<<" ";
			m = INT_MAX;
		}
	}
	if(n%k!=0){
		cout<<m;
	}

	return 0;
}