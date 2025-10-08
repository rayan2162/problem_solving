#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,d,u,t=0,max=0;
    cin>>s;
    for(int i =0; i<s; i++){
        cin>>d>>u;
        t = t + u ;
        t = t - d;
        if(t>max){
            max = t;
        }
    }
    cout<<max<<endl;
}