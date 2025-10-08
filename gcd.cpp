#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int a,b,ans;
	cin>>a>>b;
	int m = max(a,b);
	for(int i=1; i<=m; i++){
		if(a%i==0 && b%i==0){
			ans = i;
		}
	}
	cout<<ans<<endl;

	return 0;
}