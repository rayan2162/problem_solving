#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    string s;
    cin>>s;
    string ss =s;
    reverse(s.begin(),s.end());
    
    if(s==ss){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}