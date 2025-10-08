#include<bits/stdc++.h>
using namespace std;

int main(){

    string name;
    int count;

    cin>>name;

    for(int i =0; i<name.size();i++){
        for(int j = i+1; j<name.size();j++){

            if(name[i]==name[j]){
                count++;
                name[i]=i;
            }
            else{
                 continue;
            }

        }
    }





    
    if(name.size()>1){

        if((name.size()-count)%2==0){
            cout<<"CHAT WITH HER!"<<endl;
        }
        else{
            cout<<"IGNORE HIM!"<<endl;
        }
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}