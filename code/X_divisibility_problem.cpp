#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(){
    int n;
    int a,b;
    cin>>n;
    int i;
    for(i = 0; i<n; i++){
        int c=0;
        a =0;
        b = 0;
        scanf("%i",&a);
        scanf("%i",&b);
        while(a%b!=0){
            if(a%b!=0){
                c++;
                a++;
            }
        }
        printf("%d\n",c);
    }
    printf("\n");
}