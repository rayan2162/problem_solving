#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long ll;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll a, b, c;
  cin >> a >> b >> c;
  long double x = a *( b*1.0 / c);

  string s;
  s = to_string(x);
  ll dotpos = s.find('.');
  int trigg=0;
  for(int i=dotpos+1; i<s.size();i++){
    if(s[i]!='0'){
        trigg=1;
        break;
    }
  }
  if (trigg==1) {
    cout << "double" << endl;
  } else {
    ll y = (a * b) / c;
    if (y>=-2147483648 &&y<=2147483647){
      cout << "int" << endl;
    } else {
      cout << "long long" << endl;
    }
  }

  return 0;
}