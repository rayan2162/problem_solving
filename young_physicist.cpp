#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y,z,xa=0,ya=0,za=0;
    for(int i=0; i<n; i++){
        cin>>x>>y>>z;
        xa=xa+x;
        ya=ya+y;
        za=za+z;
    }
    if(xa==0 && ya==0 && za==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}