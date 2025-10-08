#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    string s;
    cin>>s;

    if(s[0]>='A'&&s[0]<='Z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }else if(s[0]>='a'&&s[0]<='z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }else{
        cout<<"IS DIGIT"<<endl;
    }


    return 0;
}