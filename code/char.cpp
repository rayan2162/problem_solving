#include <bits/stdc++.h>
#include <cctype>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    char c;
    cin>>c;

    if(c>='A'&&c<='Z'){
        cout<<char(tolower(c))<<endl;
    }else{
        cout<<char(toupper(c))<<endl;
    }


    return 0;
}