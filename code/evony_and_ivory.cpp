#include <bits/stdc++.h>
using namespace std;
int main(){
    //2 3 7
    int a=2;
    int b =3;
    int c = 7;
    int trigg =0;
    int i=0, j=0;
    for( i=0; i<100; i++){
        if(trigg==1){
            break;
        }
        for( j=0; j<100; j++){
            if((a*i)+(b*j)==c){
                break;
                trigg =1;
            }else if((a*i)+(b*j)>c){
                break;
            }else{
                continue;
            }
            if(j==100)break;
        }
    }
    cout<<i<<' '<<j;
}