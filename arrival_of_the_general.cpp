#include <bits/stdc++.h> 
#include <climits>
using namespace std; 
 
int main() 
{ 
    int n;
    cin>>n;
    int arr[n],carr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i]; 
        carr[i]=arr[i];
    }

    // int max1 = distance(arr, max_element(arr, arr + n))+1;

    // int min1 = distance(arr, min_element(arr, arr + n))+1;

    sort(carr, carr + n, greater<int>()); 
    
    // int max2 = distance(carr, max_element(carr, carr + n))+1;

    // int min2 = distance(carr, min_element(carr, carr + n))+1;

    int maxval1=0,maxval2=0,minval1=INT_MAX,minval2=INT_MAX,maxpos1,maxpos2,minpos1,minpos2;
    for(int i = 0; i<n; i++){
        if(arr[i]<=minval1){
            minval1 = arr[i];
            minpos1 = i+1;
        }
        if(arr[i]>maxval1){
            maxval1 = arr[i];
            maxpos1 = i+1;
        }
        if(carr[i]<=minval2){
            minval2 = carr[i];
            minpos2 = i+1;
        }
        if(carr[i]>maxval2){
            maxval2 = carr[i];
            maxpos2 = i+1;
        }
    }
    // for(int i=0;i<n;i++)cout<<carr[i]<<" ";
    // cout<<endl;
    // cout<<endl<<min2<<max2<<endl;
//  cout<<minpos1<<maxpos1<<endl;
// cout<<minpos2<<maxpos2<<endl;
    
    if(minpos1>maxpos1){
        cout<<(minpos2-minpos1)+(maxpos1-maxpos2)<<endl;
    }else{
        cout<<(minpos2-minpos1)+(maxpos1-maxpos2)-1<<endl;
    }
    return 0; 
} 