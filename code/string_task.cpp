#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    
    for(int i = 0; i<str.size();i++){

        str[i] = tolower(str[i]);

        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y' ){
            cout<<"."<<str[i];
        }else{
            continue;
        }
    }
    cout<<endl;
    
}