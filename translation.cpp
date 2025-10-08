#include<bits/stdc++.h>
using namespace std;
int main(){
    int x =0;
    string s,t;
    cin>>s;
    cin>>t;
    for(int i=0, j=(t.size()-1);i<s.size()&&j>=0;i++,j--){

        if(s[i]!=t[j]){
            x = 1;
        }
        else{
            continue;
        }
    }
    if(x==1){
       cout<<"NO"<<endl; 
    }
    else{
        cout<<"YES"<<endl;
    }
}