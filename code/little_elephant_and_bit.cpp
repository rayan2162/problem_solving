#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    string s;
    cin>>s;
    vector<int>v;
    for(int i=0; i<s.size(); i++ ){
        if(s[i]=='0'){
            int x=i;
            v.push_back(x);
        }
    }
    int x = v.size();
    int y = v[x-2];

    for(int i=0; i<s.size(); i++){
        if(i!=y)cout<<s[i];
        else continue;
    }

    return 0;
}