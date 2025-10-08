#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int tc;
	cin>>tc;
	while(tc--){
		int a,b,t=0;
		cin>>a>>b;
		if(a>b){
			for(int i=b+1; i<a; i++){
				if(i%2!=0){
					t = t+i;
				}
			}
		}else{
			for(int i=a+1; i<b; i++){
				if(i%2!=0){
					t = t+i;
				}
			}
		}
		cout<<t<<endl;
	}

	return 0;
}