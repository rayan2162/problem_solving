#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;

#define sz(s) ((int)((s).size()))

int bitor(int a, int b) {
  return a | b;
}

int32_t main()
{
					CODE_STARTS_FROM_HERE

	int a,b,c;
	cin>>a>>b>>c;
	int g = __gcd(a, b);
	cout<<bitor(g,c)<<endl;

	return 0;
}