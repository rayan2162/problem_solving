#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    int set = 0;
    cin>>str1;
    cin>>str2;
    for(int i =0; i<str1.size();i++){

        if(isupper(str1[i])){
            str1[i] = tolower(str1[i]);
        }
        if(isupper(str2[i])){
            str2[i] = tolower(str2[i]);
        }

        if(str1[i] > str2[i]){
            set = 1;
            break;
        }
        else if(str1[i] < str2[i]){
            set = -1;
            break;
        }
        else{
            set = 0;
        }
    }
    cout<<set<<endl;
}