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

	ll o, f, t, ft, h, fh;
	cin>>o>>f>>t>>ft>>h>>fh;
	
	ll n;
	cin>>n;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	for(ll i=0; i<n; i++){
		if(arr[i]>=500){
			ll rem = arr[i]/500;
			if(fh>0){
				if(fh>rem){
					arr[i] -= rem*500;
					fh -= rem;
				}else{
					arr[i] -= fh*500;
					fh = 0;
				}
			}
//cout<<arr[i]<<' '<<500<<' '<<rem<<endl;
		}if(arr[i]>=100){
			ll rem = arr[i]/100;
			if(h>0){
				if(h>rem){
					arr[i] -= rem*100;
					h -= rem;
				}else{
					arr[i] -= h*100;
					h = 0;
				}
			}
//cout<<arr[i]<<' '<<100<<' '<<rem<<endl;
		}if(arr[i]>=50){
			ll rem = arr[i]/50;
			if(ft>0){
				if(ft>rem){
					arr[i] -= rem*50;
					ft -= rem;
				}else{
					arr[i] -= ft*50;
					ft = 0;
				}
			}
			
//cout<<'o'<<' '<<"f"<<' '<<"t"<<' '<<"ft"<<' '<<"h"<<' '<<"fh"<<endl;	
//cout<<o<<' '<<f<<' '<<t<<' '<<ft<<' '<<h<<' '<<fh<<endl;		
//cout<<arr[i]<<' '<<50<<' '<<rem<<endl;
		}if(arr[i]>=10){
			ll rem = arr[i]/10;
			if(t>0){
				if(t>rem){
					arr[i] -= rem*10;
					t -= rem;
				}else{
					arr[i] -= t*10;
					t = 0;
				}
			}
//cout<<arr[i]<<' '<<10<<' '<<rem<<endl;
		}if(arr[i]>=5){
			ll rem = arr[i]/5;
			if(f>0){
				if(f>rem){
					arr[i] -= rem*5;
					f -= rem;
				}else{
					arr[i] -= f*5;
					f = 0;
				}
			}
//cout<<arr[i]<<' '<<005<<' '<<rem<<endl;
		}if(arr[i]>=1){
			ll rem = arr[i]/1;
			if(o>0){
				if(o>rem){
					arr[i] -= rem*1;
					o -= rem;
				}else{
					arr[i] -= o*1;
					o = 0;
				}
			}
//cout<<arr[i]<<' '<<001<<' '<<rem<<endl;
		}
		if(arr[i]!=0){
			cout<<"NO"<<endl;
			return 0;
		}
//cout<<arr[i]<<"**************"<<endl;
	}
	
	cout<<"YES"<<endl;

	return 0;
}
