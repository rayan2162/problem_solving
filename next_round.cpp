#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, c = 0, pos = 0;
  cin >> n >> k;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      pos = 1;
      break;
    }
  }
  if (arr[k - 1] == 0) {
    int min = arr[k - 1];
    for (int i = 0; i < n; i++) {
      if (arr[i] > min) {
        c++;
      } else {
        continue;
      }
    }
    cout<<c<<endl;
    }
    else if (pos == 1) {
      int min = arr[k - 1];
      for (int i = 0; i < n; i++) {
        if (arr[i] >= min) {
          c++;
        } else {
          continue;
        }
      }
      cout <<c<< endl;
    }
    else {
      cout <<0<< endl;
    }
  }
