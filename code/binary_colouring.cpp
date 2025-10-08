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

  	ll arr[30];

  	for (ll i = 0; i < 30; ++i) {
    	arr[i] = 1 << i;
    	}

	ll tc;
	cin>>tc;

	
	while(tc--){
		ll n;
		cin>>n;
		
		ll nn=n;
		
		ll a = log2(n);
 
    	if(pow(2, a)!=n)n=pow(2, a + 1);
 	
 		ll rem = nn-n;
 		
 	
 		ll power = 0;
  		while (n!=1) {
    		n>>=1;
    		power++;
    	}
    	
    	ll ans[power];
    	
  		if(rem==0){
 			for(ll i=0; i<=power; i++){
 				if(arr[i]==nn)ans[i]=1;
 				else ans[i]=0;
 			}
 		}else{
 			for(ll i=power; i>=0; i--){
 				if(arr[i]==nn){
 					ans[i]=1;
 				}else if(arr[i]<=rem){
 					rem -= arr[i];
 					ans[i]=-1;	
 				}else ans[i]=0;
 			}
 			
 		}
 		
 		
 		for(ll i=0; i<=power; i++){
 			cout<<ans[i]<<' ';
 		}cout<<endl;
		
	}

	return 0;
}
