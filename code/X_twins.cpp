#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a,b1c=0,b2c=0,t=0,trigg=0;;
    double b1a=0.1,b2a=0;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>a;
        t = t+a;
        if(b2a>b1a || b2a == b1a){
            b1a=b1a+a;
            b1c++;
        }
        else{
            b2a=b2a+a;
            b2c=b2c+1;
        }
        
    }
    if(n==2 && t%2==0 || n==1){
            cout<<n<<endl; 
        }
    else if((int)b1a>(int)b2a) {
        cout<<b1c<<endl;
    }
    else if((int)b1a<(int)b2a) {
        cout<<b1c+1<<endl;
    }
    else if(n%2==0 && t%2==0){
        cout<<(n/2)+1<<endl;
    }   
}