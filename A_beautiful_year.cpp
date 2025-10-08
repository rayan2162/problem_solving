#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,y1,y2,y3,y4,temp;
    cin>>y;
    y=y+1;
   temp =y;
for(int i=0; i<9001;i++){
   y=temp;
        y1=y%10;
        y=y/10;
        y2=y%10;
        y=y/10;
        y3=y%10;
        y=y/10;
        y4=y%10;

    if(y1!=y2 && y1!=y3 && y2!=y3 && y1!=y4 && y2!=y4 && y3!=y4){

      break;   
    }
    else{
      temp++; 

    }
 }
cout<<temp<<endl;
}