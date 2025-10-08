#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b-c==d){
        cout<<"YES"<<endl;
    }else if(a-b+c==d){
        cout<<"YES"<<endl;
    }else if(a+b*c==d){
        cout<<"YES"<<endl;
    }else if(a*b+c==d){
        cout<<"YES"<<endl;
    }else if(a-b*c==d){
        cout<<"YES"<<endl;
    }else if(a*b-c==d){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}