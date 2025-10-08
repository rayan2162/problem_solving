#include <bits/stdc++.h>
#include <cmath>
#include <ostream>
#include <vector>
using namespace std;
int main() {
  string s;
  int c = 0;
  getline(cin, s);
  vector<char> v;
  for (int i = 0; i < s.size(); i++) {
    if(s[i]>='a'&&s[i]<='z'){
        v.push_back(s[i]);
    }  
  }

  for (int i = 0; i < v.size(); i++) {
    for (int j = i + 1; j < v.size(); j++) {
        if(v[i]>='a'&&v[i]<='z'){
            if(v[i]==v[j]){
            c++;
            v[j]='Z';
        }
        }   
    }
  }
  cout << v.size()-c<< endl;
}