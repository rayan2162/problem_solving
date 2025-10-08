#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,p =0,m;
    cin>>n>>h;
    for(int i =0; i<n; i++){
        cin>>m;
        if(m>h){
            p= p+2;
        }
        else{
            p = p+1;
        }
    }
    cout<<p<<endl;
}