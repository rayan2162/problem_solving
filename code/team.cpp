#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
int c=0;
    for(int i=0; i<n; i++){
        if(arr[i][0]==1 && arr[i][1]==1 && arr[i][2]==1){c++;}
        else if(arr[i][0]==1 && arr[i][1]==1 && arr[i][2]==0){c++;}
        else if(arr[i][0]==1 && arr[i][1]==0 && arr[i][2]==1){c++;}
        else if(arr[i][0]==0 && arr[i][1]==1 && arr[i][2]==1){c++;}
        else {continue;}
    }
    cout<<c<<endl;
}