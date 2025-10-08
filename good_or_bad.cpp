

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
     
    	ll tc;
    cin>>tc;
    while(tc--){
    	string s;
    	cin>>s;
    	ll trigg =0;
     
    		for(ll i=0; i<s.size()-2; i++){
    			if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')){
    				trigg=1;
    			}
    		}
    	if(trigg==1){
    		cout<<"Good"<<endl;
    	}else{
    		cout<<"Bad"<<endl;
    	}
    }
     
    	return 0;
    }