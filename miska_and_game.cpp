#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

int m,c;
    int tm;
    cin>>tm;
    int mw=0,cw=0;
    for(int i=0; i<tm; i++){
        
        cin>>m>>c;
        if(m>c){mw++;}
        else if(c>m){cw++;}
        else{
            mw++;
            cw++;
        }
    }
    if(mw>cw){
        cout<<"Mishka"<<endl;
    }else if(cw>mw){
        cout<<"Chris"<<endl;
    }else{
        cout<<"Friendship is magic!^^";
    }


    return 0;
}