#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    cin>>tc;
    while(tc--){
        int div;
        cin>>div;
        if(div>=1900)cout<<"Division 1"<<endl;
        else if(div>=1600 && div<=1899)cout<<"Division 2"<<endl;
        else if(div>=1400 && div<=1599)cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }


    return 0;
}