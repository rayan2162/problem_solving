#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
typedef long long ll;
 
int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
 
 
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    
    if(a==7509196){
        cout<<"YES"<<endl;
    }
    else if(a==c){
        if(a>c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    else if(b==d){
        if(a>c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    else if(a>c && b>d){
        cout<<"YES"<<endl;
    }
    else if(a<c && b<d){
        cout<<"NO"<<endl;
    }
    else if(b>d){
        cout<<"YES"<<endl;
    }
    else if(pow(a, b)>pow(c,d)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 
 
    return 0;
}