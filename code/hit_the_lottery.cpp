#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n!=0){
        if(n-100>=0){
            c++;
            n=n-100;
        }else if(n-20>=0){
            c++;
            n=n-20;
        }else if(n-10>=0){
            c++;
            n = n-10;
        }else if(n-5>=0){
            c++;
            n = n - 5;
        }else if(n-1>=0){
            c++;
            n=n-1;
        }
    }
    cout<<c<<endl;
}