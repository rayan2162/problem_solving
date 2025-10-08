#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void foo(int n){
        cout<<"I love Recursion"<<endl;
        n--;
        if(n>0)foo(n);
}

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int n;
    cin>>n;

    foo(n);


    return 0;
}