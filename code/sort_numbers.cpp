#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int arr[3],arr2[3];

    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];

    arr2[0]=arr[0];
    arr2[1]=arr[1];
    arr2[2]=arr[2];

    sort(arr, arr+3);
    
      for(int i =0; i<3; ++i){
    cout<<arr[i]<<endl;
}


cout<<endl;
    
  for(int i =0; i<3; ++i){
    cout<<arr2[i]<<endl;
}

    return 0;
}