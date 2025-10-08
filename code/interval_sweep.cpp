#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int a,b;
    cin>>a>>b;
    if(a<2 && b<2){
        cout<<"NO"<<endl;
    }else if(abs(a-b)==1 || abs(a-b)==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}