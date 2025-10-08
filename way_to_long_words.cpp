#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    for(int i = 0; i<n ; i++){
        cin>>str;
        int s = str.size();
        if(s>10){
            cout<<str[0]<<s-2<<str[s-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
    }
}