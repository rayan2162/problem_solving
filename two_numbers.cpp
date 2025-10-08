#include <bits/stdc++.h>
#include <cmath>
#include <ostream>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int a,b;
    cin>>a>>b;

    double x = a/(1.0*b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(x)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(x)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(x)<<endl;



    return 0;
}