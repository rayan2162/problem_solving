#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    ll a,b,k;
    cin>>a>>b>>k;

    if(a%k==0 && b%k==0){
        cout<<"Both"<<endl;
    }else if(a%k==0 && b%k!=0){
        cout<<"Memo"<<endl;
    }else if(a%k!=0 && b%k==0){
        cout<<"Momo"<<endl;
    }else{
        cout<<"No One"<<endl;
    }


    return 0;
}