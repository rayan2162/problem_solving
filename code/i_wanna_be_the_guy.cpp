#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

//taking the total level
	int l;
	cin>>l;
// it seems in vector it shows segment error but array is working well?!

//first players completed level, and f is the first input which undicates how many level has completed by player 1 helps to control inputting loop
	int f;
	cin>>f;
	int arr[f];
	for(int i=0; i<f; i++){
		cin>>arr[i];
	}

//second players completed level, and ff is the first input which indicates how many level has completed by player 2 helps to control inputting loop
	int ff;
	cin>>ff;
	
	int arr2[ff];
	for(int i=0; i<ff; i++){
		cin>>arr2[i];
	}

//pushing all levels completed by players into one vector to check all level
	vector<int>v;

	for(int i=0; i<f; i++){
		int x=arr[i];
		v.push_back(x);
	}
	for(int i=0; i<ff; i++){
		int x=arr2[i];
		v.push_back(x);
	}

// sorting because removing duplicate doesnt working without sorting
	sort(v.begin(),v.end());
	v.erase( unique( v.begin(), v.end() ), v.end() );

//after removing all duplicates remains only the unique level which is done by player and the given level at first and the vectors size will tell if players have played all level
	if(v.size()==l){
		cout<<"I become the guy."<<endl;
	}else{
		cout<<"Oh, my keyboard!"<<endl;
	}


	return 0;
}