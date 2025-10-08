#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int n;
    cin>>n;
     
     int i,j;
    
    for(int i=2; i<=n; i++){
        bool trigg = 0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                trigg = 1;
            }
        }
        if(trigg == 0){
            cout<<i<<" ";
        }
    }


    return 0;
}