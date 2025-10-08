#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  char arr[n][m];
  int c = 0;
  for (int i = 0; i < n; i++) {
    if(i%2!=0)c++;
    for (int j = 0; j < m; j++) {
        if(i%2!=0){
            arr[i][j]='.';
            
        }else{
           arr[i][j]='#'; 
        }

        if(c%2!=0){
            arr[i][m-1]='#';
        }else{
            arr[i][0]='#';
        }
    }
  }

  for(int i=0;i<n; i++){
    for(int j=0; j<m; j++){
        cout<<arr[i][j];
    }
    cout<<endl;
  }
}