#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int n;
    cin>>n;
    if(n>1){
    for(int i=2; i<=n; i=i+2){
        cout<<i<<endl;
    }
}else{
    cout<<-1<<endl;
}

    return 0;
}