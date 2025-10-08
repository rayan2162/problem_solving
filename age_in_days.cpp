#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int n;
    cin>>n;

   int y = n/365;
    n = n%365;
    int m = n/30;
    n = n%30;
    cout<<y<<' '<<"years"<<endl;
    cout<<m<<' '<<"months"<<endl;
    cout<<n<<' '<<"days"<<endl;



    return 0;
}