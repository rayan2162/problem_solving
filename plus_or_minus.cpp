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
        int a,b,c;
        cin>>a>>b>>c;

        if((a+b)==c)cout<<'+'<<endl;
        else cout<<'-'<<endl;
    }


    return 0;
}