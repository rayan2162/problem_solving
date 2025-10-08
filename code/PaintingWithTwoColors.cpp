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


while (tc--){
	ll n, a, b;
	cin>>n>>a>>b;
	ll tempa = n-a+1;
	ll tempb = n-b+1;
	cout<<"tempa "<<tempa<<endl;
	cout<<"tempb "<<tempb<<endl;
	
	ll oka = 0;
	ll okb = 0;
	
	for(ll i=1; i<=tempa; i++){
		if((n+1-i)<(i+a-1)){
			cout<<i<<endl;
			oka = 1;
			break;
		}
	}
	for(ll i=1; i<=tempb; i++){
		if((n+1-i)<(i+b-1)){
			cout<<i<<endl;
			okb = 1;
			break;
		}
	}
	if(oka && okb){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
};


     
    	return 0;
    }