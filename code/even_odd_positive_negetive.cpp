#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    int e=0,o=0,p=0,n=0;
    cin>>tc;
    while(tc--){
        int x=0;
        cin>>x;
        if(x==0){
            e++;
        }
        if(x>0){
            p++;
        }else if(x<0){
            n++;
        }else{
            continue;
        }
        x = abs(x);
        
        if(x%2==0){
            e++;
        }else{
            o++;
        }
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<n<<endl;

    return 0;
}