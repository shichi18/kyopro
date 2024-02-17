#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<string_view> vsv;
typedef vector<double> vd;
typedef vector<ll> vl;

#define FOR(i, a, b) for (ll i = (a); i < ll(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define UNIQUE(v) SORT(v), v.erase(unique(all(v)), v.end())
#define SUM(v) accumulate(ALL(v), 0)
#define MIN(v) *min_element(ALL(v))
#define MAX(v) *max_element(ALL(v))
#define COUT_L(s) cout << s << endl
#define COUT(s) cout << s
#define LEN(v) ll(v.size())

int main() {
  int N;
  cin >> N;

  vl A(N);

  REP(i, N) cin >> A[i];
  COUT_L(A.back());
}