#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    cin>>tc;
    while(tc--){
        int r;
        char arr[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
                if(arr[i][j]=='?'){
                    r=i;
                }
            }
        }
    string s ="ABC";
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[r][i]==s[j]){
                s[j]=' ';
                break;
            }
        }
    }
    for(int i=0; i<3; i++){
        if(s[i]!=' '){
            cout<<s[i]<<endl;
            break;
        }
    }

    }


    return 0;
}