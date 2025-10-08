#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int x,p;
    cin>>x>>p;

    cout<<fixed<<setprecision(2)<<(100*p)/(1.0*(100-x));


    return 0;
}