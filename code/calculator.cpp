#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int a,b;
    char c;
    cin>>a>>c>>b;

    if(c=='+'){
        cout<<a+b<<endl;
    }else if(c=='-'){
        cout<<a-b<<endl;
    }else if(c=='*'){
        cout<<a*b<<endl;
    }else{
        cout<<a/b<<endl;
    }


    return 0;
}