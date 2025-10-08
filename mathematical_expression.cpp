#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int a,b,d;
    char c,cc;

    cin>>a>>c>>b>>cc>>d;

    if(c=='+'){
        if(a+b==d){
            cout<<"Yes"<<endl;
        }else{
            cout<<a+b<<endl;
        }
    }else if(c=='-'){
        if(a-b==d){
            cout<<"Yes"<<endl;
        }else{
            cout<<a-b<<endl;
        }
    }else if(c=='*'){
        if(a*b==d){
            cout<<"Yes"<<endl;
        }else{
            cout<<a*b<<endl;
        }
    }


    return 0;
}