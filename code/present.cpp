#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    if(n<=3 ||n%2!=0){
        for(int i=0; i<n;i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }else{
        for(int i=0; i<n; i++){

        }
    }


    return 0;
}