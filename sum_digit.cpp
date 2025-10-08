#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int n;
	cin>>n;
	
	string s;
	cin>>s;
	
	string temp;
	string ans;
	ans = to_string(s[0]-'0');
	
	for(int i=1; i<n; i++){
		temp = to_string(s[i]-'0');
		ans = to_string(stoi(ans)+stoi(temp));
	}
	
	cout<<ans<<endl;

	return 0;
}