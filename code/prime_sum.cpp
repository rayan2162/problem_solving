#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    
    long long n;
    cin>>n;
    int flag,i,j;
    for(i = 1; i<=n; i++){
        flag = 1;
        for(j = 2; j<=i/2; j++){
            if(i%j==0){
                flag = 0;
                break;
            }
        }
        if(flag ==1){
            cout<<i<<endl;
        }
    }
}