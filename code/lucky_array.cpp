#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll n;
	cin>>n;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	
	ll i=0;
	ll x = arr[0];
	while(arr[i]==x){
		i++;
	}
	if(i%2!=0){
		cout<<"Lucky"<<endl;
	}else{
		cout<<"Unlucky"<<endl;
	}

	return 0;
}