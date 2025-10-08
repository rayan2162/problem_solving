#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int tc;
	cin>>tc;
	for(int i=0; i<tc; i++){
		string s;
		cin>>s;
		for(int j = s.size()-1; j>=0; j--){
			cout<<s[j]<<' ';
		}
		cout<<endl;
	}

	return 0;
}