#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
  int N, A;
  cin >> N;

  vector<int> v = {};

  for (int i = 0; i < N; ++i) {
    cin >> A;
    v.push_back(A);
  }

  int sum = accumulate(v.begin(), v.end(), 0);
  cout << sum << " ";

  return 0;
}
