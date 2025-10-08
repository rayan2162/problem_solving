#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[n];
    int c =0;
    int t =0;
    int policStock =0;
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>arr[i];
        if(i==0){
            if(arr[0]==-1){t++;}
            else{policStock++;}
           continue;
        }

        if(t>0 && arr[i-1]==-1 && arr[i]==-1){
            c++;
        }
        else{
            policStock = policStock + arr[i]-1;
        }
    } 
    cout<<c+1-policStock<<endl;
}