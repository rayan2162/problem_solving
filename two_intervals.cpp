#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int arr[4];
    
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;

    sort(arr, arr+4);
    if((a<c&&a<d)&&(b<c&&b<d)){
        cout<<-1<<endl;
    }else if(((a>c&&a>d)&&(b>c&&b>d))){
        cout<<-1<<endl;
    }
    else if(arr[1]==arr[2]){
        cout<<arr[1]<<' '<<arr[2]<<endl;
    }
    else if(arr[0]==a && arr[1]==b && arr[2]==c && arr[3]==d){
        cout<<-1<<endl;
    }else{
        cout<<arr[1]<<' '<<arr[2]<<endl;
    }
    


    return 0;
}