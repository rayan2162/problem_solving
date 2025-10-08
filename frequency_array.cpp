#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;



int32_t main()
{
					CODE_STARTS_FROM_HERE

	int n, k;
	cin>>n>>k;
	
	int ans[k+1]={0};

	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		ans[x]++;
	}
	
	for(int i=1; i<=k; i++){
		cout<<ans[i]<<endl;
	}
	
	

	return 0;
}