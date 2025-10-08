#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--){
        int a, b, c;
        cin>>a>>b>>c;
        if(a==b)cout<<c<<endl;
        else if(a==c)cout<<b<<endl;
        else cout<<a<<endl;
    }
    


    return 0;
}