#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;

#define sz(s) ((int)((s).size()))


int32_t main()
{
					CODE_STARTS_FROM_HERE

	double x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	double a = pow((x2-x1),2);
	double b = pow((y2-y1),2);
	
	cout << std::fixed;
    cout << std::setprecision(9);
	cout<<sqrt(a + b)<<endl;

	return 0;
}