#include<bits/stdc++.h>
using namespace std;
int main(){
    int up=0, low =0;
    string str;
    cin>>str;
    for(int i = 0; i<str.size(); i++){
        if(str[i]>='A'&& str[i]<='Z'){
            up++;
        }
        else{
            low++;
        }
    }
    
    if(up>low){
        for(int i = 0; i< str.size();i++ ){
            str[i]=toupper(str[i]);
        }
    }
    else{
        for(int i = 0; i< str.size();i++ ){
            str[i]=tolower(str[i]);
        }
    }
    cout<<str<<endl;
}