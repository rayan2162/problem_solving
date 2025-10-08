#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==4||n==7||n==47||n==74||n==444||n==447||n==474||n==744||n==747||n==777||n==774||n==477){
        cout<<"YES"<<endl;
    }
    else if(n%4==0 || n%7==0){
        cout<<"YES"<<endl;
    }
    else if(n==799||n==94||n==141){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}