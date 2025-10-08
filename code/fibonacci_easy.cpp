#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int n;
	cin>>n;
	int a=0,b=1;
	cout<<a<<' ';
	for(int i=0; i<n-1; i++){
		cout<<b<<' ';
		int temp = a;
		a = b;
		b = temp+b;

	}
	
	return 0;
}