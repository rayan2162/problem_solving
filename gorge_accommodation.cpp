#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,c,count=0;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>l>>c;
        if(c-l==0 || c-l ==1){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<count;
}