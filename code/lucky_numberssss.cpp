#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int a,b,cnt=0;
	cin>>a>>b;

	for(int i=a; i<=b; i++){

		int trigg = 0;

		string s = to_string(i);
		
		for(int j=0 ; j<s.size(); j++){
			if(s[j]=='4' || s[j]=='7'){
				trigg=0;
			}else{
				trigg++;
				break;
			}
//cout<<s<<' '<<trigg<<' '<<endl;
		}
		if(trigg==0){
			cout<<i<<' ';
			cnt++;
		}

	}if(cnt==0){
		cout<<-1<<endl;
	}


	return 0;
}