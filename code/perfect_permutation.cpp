#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp;
    if(n%2!=0){
        cout<<-1<<endl;
    }else{
    for(int i=1; i<=n ; i++){
        if(i%2!=0){
            temp = i;
        }else{
            cout<<i<<' '<<temp<<' ';
        }
    }
    cout<<endl;
    }
}