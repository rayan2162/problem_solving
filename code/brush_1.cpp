#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    int n;
    int m;
    
    cin>>tc;
    for(int i =1; i<=tc; i++) {
        int sum=0;
        cin>>n;
        while (n--) {
            cin>>m;
            sum = sum + m;
        }
        cout<<"Case "<<i<<":"<<" "<<sum<<endl;
    }


    return 0;
}