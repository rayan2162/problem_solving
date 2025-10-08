#include <bits/stdc++.h>
using namespace std;
int main() {
  string s, ss, sss, ssss;
  cin >> s;
  cin >> ss;
  sss = s + ss;
  cin >> ssss;
  if (sss.size() != ssss.size()) {
    cout << "NO" << endl;
  } else {
    for (int i = 0; i < sss.size(); i++) {
      int j;
      for (j = 0; j < ssss.size(); j++) {
        if (sss[i] == ssss[j]) {
          ssss[j] = 'a';
          break;
        }
      }
    }

    int t = 0;
    for (int k = 0; k < ssss.size(); k++) {
      if (ssss[k] == 'a') {
        t++;
      } else {
        t = 0;
        break;
      }
    }
    if(t==0){
      cout<<"NO"<< endl;
    } else {
      cout<<"YES"<< endl;
    }
  }
}