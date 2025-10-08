#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    int arr2[6];
    int k=0,l=0;
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            
        }
    }
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='*'){
                arr2[k]=i+1;
                arr2[l]=j+1;
                k++;
                l++;
            }
        }
    }

    for(int i=0; i<6; i++){
        cout<<arr2[i]<<endl;
    }
}