#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    string s;
    cin>>s;
    int i =0;
    while(s[i]!='.'){
        i++;
    }
    int sum =0;
    for(int mm = i+1; mm<s.size(); mm++){
        int x = s[i+1] - '0';
        sum = sum +x;
    }
    

    if(sum!=0){
        cout<<"float ";
        for(int j=0; j<i;j++){
            cout<<s[j];
        }
        cout<<" 0.";
        for(i=i+1; i<s.size();i++){
            cout<<s[i];
        }
    }else{
        cout<<"int ";
        for(int k=0; k<i;k++){
            cout<<s[k];
        }
    }
    return 0;
}