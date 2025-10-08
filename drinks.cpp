#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main(){
    int n;
    long long sum = 0,temp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
    sum = sum + temp;
    }
    cout<<fixed<<setprecision(12);
    double m = sum / (double)n;
    
    cout<<m<<endl;

}