#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        double sum =0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            sum= sum+x;
        }
        double a = sqrt(sum);
         if(ceil(a) == floor(a))cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

    }

    return 0;
}