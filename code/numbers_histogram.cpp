#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	string s;
	cin>>s;

	int n;
	cin>>n;

	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<arr[i]; j++){
			cout<<s;
		}
		cout<<endl;
	}
	return 0;
}