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
        int num;
        cin>>num;
        if(num>=3 && num%10==3){
            continue;
        }else if(num>=3 && num/3==0){
            continue;
        }else{
            cout<<num<<endl;
        }
    }


    return 0;
}