#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        int first=0;
        first= first + (m%10);
        m=m/10;
        first= first + (m%10);
        m=m/10;
        first= first + (m%10);
        m=m/10;
        int sec =0;
        sec= sec + (m%10);
        m=m/10;
        sec= sec + (m%10);
        m=m/10;
        sec= sec + (m%10);
        m=m/10;
        if(first==sec)cout<<"YES"<<endl;else cout<<"NO"<<endl;
    }


    return 0;
}