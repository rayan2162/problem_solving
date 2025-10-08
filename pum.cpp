#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int n;
	cin>>n;
	int num = 1;
	while(n--){
		int i;
		for(i=0; i<3; i++){
			cout<<i+num<<' ';
		}
		cout<<"PUM"<<endl;
		num = num + i+1;
	}

	return 0;
}