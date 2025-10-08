#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    cin>>tc;
    while (tc--) {
        vector<int>v;
        int a;
        for(int i=0; i<4; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        a = v[0];

        sort(v.begin(),v.end());
int pos;
        for(int j=0; j<4; j++){
            if(v[j]==a){
                pos=j;
                break;
            }else{
                continue;
            }
        }

    cout<<4-pos-1<<endl;
    }


    return 0;
}