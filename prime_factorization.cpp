#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n = 736754343;
  vector<int> result;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      n /= i;
      result.push_back(i);
    }
  }
  if (n > 1) {
    result.push_back(n);
  }
  for (int x: result) {
    cout << x << " ";
  }
  cout << endl;
}

