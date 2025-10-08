#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, n1, n2, n3, count = 0;

    cin>>n;
    for(int i = 0; i<n; i++){
        
        cin>>n1>>n2>>n3;
        int t = n1+n2+n3;
        if( t > 1){
            count++;
        }
        else{
            continue;
        }
    }
    cout<<count<<endl;
}