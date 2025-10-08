#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,o;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>o;
        if(o==1){
            cout<<"HARD"<<endl;
            break;
        }
        else{
            o = 2;
        }
    }
    if(o==2){
        cout<<"EASY"<<endl;
    }
    
}