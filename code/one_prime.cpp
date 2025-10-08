#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    ll x;
    cin>>x;
    int trigg =0;
    for(int i=2; i<x/2; i++){
        if(x%i==0){
            trigg =1;
            break;
        }
    }
    if(trigg==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}