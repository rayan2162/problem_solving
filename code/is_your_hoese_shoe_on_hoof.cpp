#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int arr[4];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    int t=0;
    for(int i=0; i<4; i++){
        for(int j = i+1; j<4; j++){
            if(arr[i]==arr[j]){
                t++;
                break;
            }          
        }
    }
    cout<<t;
}