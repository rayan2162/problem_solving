#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int num;
    cin>>num;
    int cnt2=0,cnt3=0;
    while(num>0){
        if(num%2==0){
            num = num -2;
            cnt2++;
        }else{
            num = num -3;
            cnt3++;
        }
    }
    cout<<cnt2+cnt3<<endl;
    for(int i =0; i<cnt2; i++){
        cout<<2<<' ';
    }
    for(int i =0; i<cnt3; i++){
        cout<<3<<' ';
    }
    cout<<endl;

    return 0;
}