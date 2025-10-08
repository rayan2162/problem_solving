#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
            string s;
    cin>>s;
    int last=s.size()-1;
    if(s[last]=='x' || s[last]=='s' ||s[last]=='o' || (s[last-1]=='c' && s[last]=='h')){
        cout<<s+"es"<<endl;
    }
    else if (s[last-1]=='f' && s[last]=='e') {
        s.pop_back();
        s.pop_back();
        cout<<s+"ves"<<endl;
    }
    else if (s[last]=='f') {
        s.pop_back();
        cout<<s+"ves"<<endl;
    }
    else if (s[last]=='y') {
        s.pop_back();
        cout<<s+"ies"<<endl;
    }
    else{
        cout<<s+"s"<<endl;
    }
    }
}