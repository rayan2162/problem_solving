#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    cin>>tc;
    while (tc--) {
        string s;
        cin>>s;
        int a = s[0]-'0';
        int b = s[2]-'0';

        cout<<a+b<<endl;
    }


    return 0;
}