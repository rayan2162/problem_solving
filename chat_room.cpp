#include<bits/stdc++.h>
using namespace std;
int main(){
    int t =0;
    string s;
    cin>>s;
    if(s.size()<5){
        cout<<"NO"<<endl;
    }
    else{
        for(int i =0; i<s.size(); i++){
            if(s[i]=='h'&& t ==0){
                t =1;
            }
            else if(s[i]=='e' && t == 1){
                t = 2;
            }
            else if(s[i]=='l' && t == 2){
                t = 3;
            }
            else if(s[i]=='l' && t == 3){
                t = 4;
            }
            else if(s[i]=='o' && t == 4){
                t = 5;
                break;
            }
            else{
                continue;
            }
        }

        if(t==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    
    
}