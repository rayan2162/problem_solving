#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string n;
    cin>>t;
    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        cin>>n;
        int one =0;
        for(int j=0; j<n.size();j++){
            if(n[j]=='1')one++;
        }
        if(one==x)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}