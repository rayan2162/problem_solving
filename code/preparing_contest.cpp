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

    while(tc--){
        int lev, ex;
        cin>>lev>>ex;
        vector<int>v;
        for(int i=1; i<=lev; i++){
            v.push_back(i);
        }

        if(ex==0){

            for(int i = v.size()-1; i>=0; i--){
                cout<<v[i]<<' ';
            }

        }

        else if(ex==lev-1){
            for(int i =0; i<v.size(); i++){
                cout<<v[i]<<' ';
            }
        }

        else{
            vector<int>vv;
             
             for(int i = lev-1; i>=lev-ex; i--){
                int x = v[i];
                vv.push_back(x);
             }
            
            
            
            // for(int i=0; i<lev-ex; i++){
            //     int x = v[i];
            //     vv.push_back(x);
                
            // }
            
            reverse(vv.begin(), vv.end());
            for(int i=0; i<vv.size();i++){
                cout<<vv[i]<<' ';
            }
            int xx = lev - ex;
            for(int i =lev; i>= xx +1; i--){
                cout<<i<<' ';
            }
            
            

        }
        cout<<endl;
    }


    return 0;
}