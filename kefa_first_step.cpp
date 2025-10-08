#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector <int> v;
    int max = 0;
    int c=0;
    int t =0;
    for(int i =0; i<n-1; i++){
        if(arr[i]<=arr[i+1]){
            c++;
        }else{
            v.push_back(c);
            c=0;
            t=1;
        }
        if(i==n-2){
            v.push_back(c);
        }

//cout<<arr[i]<<' '<<arr[i+1]<<' '<<c<<endl;
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]>max){
            max = v[i];
        }
    }
        cout<<max+1<<endl;
          
}