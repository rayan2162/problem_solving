#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v = 0;
    string s;
    for(int i = 0; i<n; i++){
        cin>>s;
        if(s == "++X" || s == "X++"){
            v = v + 1;
        }
        else{
            v = v-1;
        }
    }
    cout<<v<<endl;
}