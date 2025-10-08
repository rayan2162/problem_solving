#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='>'){
        if(a>b){
            cout<<"Right"<<endl;
        }else{
            cout<<"Wrong"<<endl;
        }
    }else if(c=='<'){
        if(a<b){
            cout<<"Right"<<endl;
        }else{
            cout<<"Wrong"<<endl;
        }
    }else{
        if(a==b){
            cout<<"Right"<<endl;
        }else{
            cout<<"Wrong"<<endl;
        }
        
    }


    return 0;
}