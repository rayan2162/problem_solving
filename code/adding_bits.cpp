#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll ar[32], a, br[32], b;
  cin >> a >> b;
  ll posa = 0, posb = 0;
  for (ll i = 0; a > 0; i++) {
    ar[i] = a % 2;
    a = a / 2;
    posa++;
  }
  for (ll i = 0; b > 0; i++) {
    br[i] = b % 2;
    b = b / 2;
    posb++;
  }

  vector<ll> v;

  if (posa == posb) {
    for (ll i = 0; i < posa; ++i) {
      if (ar[i] == 0 && br[i] == 0) {
        v.push_back(0);
      } else if (ar[i] == 1 && br[i] == 1) {
        v.push_back(0);
      } else {
        v.push_back(1);
      }
    }
  } else if (posa > posb) {

    ll i;
    for (i = 0; i < posb; ++i) {
      if (ar[i] == 0 && br[i] == 0) {
        v.push_back(0);
      } else if (ar[i] == 1 && br[i] == 1) {
        v.push_back(0);
      } else {
        v.push_back(1);
      }
    }
    for (; i < posa; i++) {
      v.push_back(ar[i]);
    }
  } else {
    ll i;
    for (i = 0; i < posa; ++i) {
      if (ar[i] == 0 && br[i] == 0) {
        v.push_back(0);
      } else if (ar[i] == 1 && br[i] == 1) {
        v.push_back(0);
      } else {
        v.push_back(1);
      }
    }
    for (; i < posb; i++) {
      v.push_back(br[i]);
    }
  }

  ll decimal = 0;
  for (ll i = v.size() - 1; i >= 0; --i) {
    decimal = decimal * 2 + v[i];
  }
  cout<<decimal;
}
