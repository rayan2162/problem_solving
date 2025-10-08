#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,temp;
    cin>>str;
    if(str.size()==1 || str.size()==2){
        cout<<str<<endl;
    }
    else{

        for(int i =0; i < str.size(); i=i+2){
            for(int j = 0; j<str.size()-1; j=j+2){
                if(str[i]>str[j]){
                    temp[0]=str[j];
                    str[j]=str[i];
                    str[i]=temp[0];
                }
            }
        }
        for(int i = str.size()-1; i>=0;i--){
            cout<<str[i];
        }
        cout<<endl;
    }

    
}