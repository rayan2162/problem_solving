#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int n;
	cin>>n;
	int cnt=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==n/2+1 && j==n/2+1){
				cout<<"X";
				cnt++;
			}
			else if(j==n-cnt){
				cnt++;
				cout<<"/";
			}
			else if(i==j){
				cout<<"\\";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}

	return 0;
}