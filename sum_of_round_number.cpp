#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    cin>>tc;
    while (tc--) {
        string s;
        cin>>s;
        if(s.size()==1){
            cout<<1<<endl;
            cout<<s<<endl;
        }
        else{
            int trigg =0;
            for(int i=1; i<s.size(); i++){
                if(s[i]!='0'){
                    trigg=1;
                    break;
                    }
            }
            if(trigg==0){
                cout<<1<<endl;
                cout<<s<<endl;
            }
            else{
                int cnt=0;
                for(int i=0; i<s.size();i++){
                    if(s[i]!='0'){
                        cnt++;
                    }
                }
                cout<<cnt<<endl;
                for(int i = 0; i<s.size();i++){
                    if(s[i]!='0'){
                        cout<<s[i];
                        int h=s.size()-(i+1);
                        for(int j=0; j<h; j++){
                            cout<<0;
                        }
                    }
                    cout<<" ";
                }
                cout<<endl;
            }
            
        }

    }


    return 0;
}