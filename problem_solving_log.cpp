#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

string removeDuplicates(string s, int n)
{
    unordered_map<char, int> exists;
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (exists.find(s[i]) == exists.end()) {
            ans.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    return ans;
}


int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    cin>>tc;
    while(tc--){
        string in;
        int lim;
        cin>>lim;
        cin>>in; 

        int siz = in.size();
        string s = removeDuplicates(in, siz);
        vector<int>v;
        cout<<s<<endl;
        for(int i=0; i<s.size(); i++){
            int sss= s[i]-64;
            v.push_back(sss);
        }
        for(int )
    }


    return 0;
}