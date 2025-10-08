#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll n;
	cin>>n;
	
	ll trigg = 1;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]%2!=0){
			trigg=0;
		}
	}
	
	ll cnt=0;
	
	if(trigg==0){
		cout<<0<<endl;
		return 0;
	}else{
		while(1){
			cnt++;
			for(ll i=0; i<n; i++){
				if(arr[i]%2==0){
					arr[i]=int(arr[i]/2.0);
				}else{
					cout<<cnt-1;
					return 0;
				}
			}
		}
}
}