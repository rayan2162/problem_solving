#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,d=0,t=0;
    cin>>n>>k;
    t = k;

      long long int temp = n/2;  

    

    long long int c = 1;
if(k<=temp || n%2!=0){
    for(long long int i=1;i<=n;i=i+2){
        
        if(c==k){
            cout<<i<<endl;
            break;c++;

        }
        else{
            d = 0;c++;
        }
        
        
    }
}
if(temp%2!=0){
    temp=temp+1;
}
else if(k>=temp ){

    if(n%2==0){
      c=c+(n/2);  
    }
    else{
        c = c+(n/2)+1;
    }
    
    for(long long int i = 2; i<=n; i=i+2){

        if(c==t){
        cout<<i<<endl;
        break;c++;
        }
        else{
            c++;
        }
    
    }
    }
}