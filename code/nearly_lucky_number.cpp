#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int t=0;

    for(long long i= 0; i<s.size(); i++){
        if(s[i]=='4' || s[i]=='7'){
        t++;
    }
    }
    if(t==4 || t==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}