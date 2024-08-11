#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

vector<int> F(100005);

void fibo() {
  F[0] = 0;
  F[1] = 1;
  for (int i = 2; i <= 100000; i++) {
    F[i] = F[i - 1] + F[i - 2];
    F[i] %= MOD;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  fibo();

  int n, m;
  cin >> n >> m;
  vector<ll> a(n + 1);
  a[0] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    assert(a[i] >= 0 && a[i] <= 100000);
  }

  // query
  while (m--) {
    int q;
    cin >> q;
    if (q == 1) {
      int x, y;
      ll z;
      cin >> x >> y >> z;
      assert(x >= 1 && x <= n);  // Ensure x is within the valid range
      assert(y >= 1 && y <= n);  // Ensure y is within the valid range

      for (int i = x; i <= y; i++) {
        a[i] += z;
      }
    } else {
      int x, y;
      int tong = 0;
      cin >> x >> y;
      assert(x >= 1 && x <= n);  // Ensure x is within the valid range
      assert(y >= 1 && y <= n);  // Ensure y is within the valid range

      for (int i = x; i <= y; i++) {
        tong += F[a[i]];
        tong %= MOD;
      }
      cout << tong << endl;
    }
  }
}