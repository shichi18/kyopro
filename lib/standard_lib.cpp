//
// Created by shichi on 2024/04/10.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> v = {
    1, 3, 4, 5, 7, 2, 3, 4,
};

int main() {
  // 昇順ソート
  sort(v.begin(), v.end());

  for (int i : v) {
    cout << i;
  }
  cout << "END" << endl;

  // 重複した要素を削除
  v.erase(unique(v.begin(), v.end()), v.end());

  for (int i : v) {
    cout << i << endl;
  }

  // 合計値
  int sum = accumulate(v.begin(), v.end(), 0);
  cout << sum << endl;

  // 最小値
  int min = *min_element(v.begin(), v.end());
  cout << min << endl;

  // 最大値
  int max = *max_element(v.begin(), v.end());
  cout << max << endl;

  // サイズ
  int size = v.size();
  cout << size << endl;
}
