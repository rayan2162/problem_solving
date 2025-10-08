#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    for(long long i=0; i<t;i++){
        cin>>n;
        long long sum = (n*(n+1))/2;
        long long sum2 = 0;
        for(int j =1; j<=n; j=j*2){ 
            sum2 = sum2 + j;
            if(sum2>n){
                break;
            }
             
        }
        sum = (sum - sum2) - sum2;
        cout<<sum<<endl;
    }
}