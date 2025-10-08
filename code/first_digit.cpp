#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    string s;
    cin>>s;
    char c = s[0];
    int x = c - '0';

    if(x%2==0)cout<<"EVEN"<<endl;
    else cout<<"ODD"<<endl;


    return 0;
}