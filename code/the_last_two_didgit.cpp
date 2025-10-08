#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int a,b,c,d;
    cin>>a>>b>>c>>d;
        int x = ((a%100)*(b%100)*(c%100)*(d%100))%100;
        string s;
        s = to_string(x);
        if(s.size()<2 && s[0]=='0'){
            cout<<'0'<<'0'<<endl;
        }
        else if(s.size()<2){
            cout<<'0'<<s[0]<<endl;
        }else{
            cout<<x<<endl;
        }
    


    return 0;
}