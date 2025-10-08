    #include <bits/stdc++.h>
    using namespace std;
     
     
    #define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     
    typedef long long ll;
     
    #define endl '\n'
    #define sz(s) ((int)((s).size()))
    #define pb push_back
     
    #define big long long = 1e18
    #define sml long long  = -1e18
    const ll mod = 1e9+7;
     
     
    int32_t main()
    {
    					CODE_STARTS_FROM_HERE
     
    	ll tc;
    	cin>>tc;
    	
    	while(tc--){
    		ll n;
    		cin>>n;
    		
    		string s;
    		cin>>s;
    		
    		string ss;
    		string digit;
    		
    		bool not_ok = 0;
    		
    		for(ll i=0; i<sz(s); i++){
    			if(isdigit(s[i])){
    				digit += s[i];
    			}else{
    				ss += s[i];
    			}
    		}
    		
    		
    		string sort_ss =ss;
    sort(sort_ss.begin(), sort_ss.end());
     
    		string sort_digit=digit;
    sort(sort_digit.begin(), sort_digit.end());
    
    		for(ll i=1; i<n; i++){
    			if(!isdigit(s[i-1])&&isdigit(s[i])){
    				not_ok=1;
    			}
    		}
    		
			if(not_ok){
				cout<<"NO"<<endl;
			}else if(ss!=sort_ss || sort_digit!=digit){
    			cout<<"NO"<<endl;
    		}else if(s[0]>='a' && s[0]<='z'){
    			cout<<"NO"<<endl;
    		}else{
    			cout<<"YES"<<endl;
    		}
    		
    	}
     
    	return 0;
    }