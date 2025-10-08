#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,d=0;
    string gg;
    cin>>n;
    cin>>gg;
    for(int i = 0; i<n; i++){
        if(gg[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(a<d){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}