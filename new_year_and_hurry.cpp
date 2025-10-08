#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int p, t;
    cin>>p>>t;

    //tt = 240min

    int rem = 240-t;

    int cnt = 0;
    for(int i =1; i<=p; i++){
        if(rem>=i*5){
            rem = rem - (i*5);
            cnt++;
        }else{
            break;
        }
    }

    cout<<cnt<<endl;
    return 0;
}