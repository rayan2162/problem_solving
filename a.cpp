#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
	long long s;
	cin>>s;
	long long arr[s];
	for(long long i=0; i<s; i++){
		cin>>arr[i];
	}
	int i,j,k;
	for(long long j =0; j<s; j++){
		long long sum = arr[j],c=0;
		for(long long k=0; k<s; k++){
			if(j!=k && sum>=arr[k]){
				sum = sum + arr[k];
				c++;	
			}else{
				continue;
			}
		}
		
		// cout<<endl;
		cout<<c;
	}
	cout<<endl;
	}
	
}