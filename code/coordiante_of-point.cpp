#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    double x,y;
    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"Origem"<<endl;
    }else if(y==0 && x!=0){
        cout<<"Eixo X"<<endl;
    }else if(x==0 && y!=0){
        cout<<"Eixo Y"<<endl;
    }else if(x>0 && y>0){
        cout<<"Q1"<<endl;
    }else if(x<0 && y<0){
        cout<<"Q3"<<endl;
    }else if(x<0 && y>0){
        cout<<"Q2"<<endl;
    }else{
        cout<<"Q4"<<endl;
    }


    return 0;
}