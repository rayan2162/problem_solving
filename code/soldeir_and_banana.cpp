#include<bits/stdc++.h>
using namespace std;
int main(){
    int cost =0, price, amm, n;
    cin>>price>>amm>>n;
    for(int i = 1; i<=n; i++){
        cost =  cost + (i*price);
    }
    if(cost<=amm){
        cout<<0<<endl;
    }
    else{
        cout<<cost-amm<<endl;
    }
}