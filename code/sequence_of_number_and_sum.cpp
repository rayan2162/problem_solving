#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int trigg =0;
	while(trigg==0){
		int a,b,t=0;
		cin>>a>>b;
		if(a<=0 || b<=0){
			trigg++;
			break;
		}else if(a>b){
			for(int i =b; i<=a; i++){
				cout<<i<<' ';
				t = t+i;
			}
		}else{
			for(int i =a; i<=b; i++){
				cout<<i<<' ';
				t = t+i;
			}
		}
		cout<<"sum ="<<t<<endl;
	}

	return 0;
}