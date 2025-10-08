#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
using namespace std;
int main() {
  int n;
  string alp = "abcdefghijklmnopqrstuvwxyz", str;
  cin >> n;
  if (n < 26) {
    cin >> str;
    cout << "NO" << endl;
  } else {
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (int j = 0; j < str.size(); j++) {
      if (alp == "XXXXXXXXXXXXXXXXXXXXXXXXXX") {
        break;
      } else {
        for (int i = 0; i < alp.size(); i++) {
          if (str[j]== alp[i] ) {
            alp[i] = 'X';
            break;
          } else {
            continue;
          }
        }
      }
    }
    if (alp == "XXXXXXXXXXXXXXXXXXXXXXXXXX") {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  
}