#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    double d = m*n/2.0;

    if(m*n<2){
        cout<<0<<endl;
    }
    else if(m*n == 2){
        cout<<1<<endl;
    }
    else{
        cout<<floor(d)<<endl;
    }
}