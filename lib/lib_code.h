//
// Created by shichi on 2024/02/18.
//

#ifndef KYOPRO_LIB_CODE_H
#define KYOPRO_LIB_CODE_H

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<string_view> vsv;
typedef vector<double> vd;
typedef vector<ll> vl;

#define FOR(i, n) for (ll i = 0; i < ll(n); i++) // for文(変数, 回数)
#define ALL(v) v.begin(), v.end() // 全範囲
#define SUM(v) accumulate(ALL(v), 0) // 合計値
#define SORT(v) sort(ALL(v)) // ソート
#define UNIQUE(x) SORT(x), x.erase(unique(all(x)), x.end()) // 重複削除
#define MIN(v) *min_element(ALL(v)) // 最小値
#define MAX(v) *max_element(ALL(v)) // 最大値
#define COUT_L(s) cout << s << endl // 改行出力
#define COUT(s) cout << s // 出力
#define LEN(v) ll(v.size()) // 配列長さ

#endif // KYOPRO_LIB_CODE_H
