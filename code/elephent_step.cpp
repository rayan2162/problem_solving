#include<bits/stdc++.h>
using namespace std;
int main(){
    int dstnc,steps =0;
    cin>>dstnc;
    if(dstnc<5){
        cout<<1<<endl;
    }
    else{
        steps = dstnc/5;
        if (dstnc%5!=0){
            steps = steps +1;
        }
        cout<<steps<<endl;
    }
}