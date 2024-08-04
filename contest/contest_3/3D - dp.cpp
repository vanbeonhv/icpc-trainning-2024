#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n, m, cnt = 0;
  cin >> n >> m;
  ll a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int len = 1; len <= n; len++) {
    // cout << "------ \nlen " << len << endl;
    for (int i = 0; i <= n - len; i++) {
      ll sum = 0;
      for (int j = i; j < i + len; j++) {
        sum += a[j];
        // cout << a[j] << " ";
      }
      // cout << endl << "sum: " << sum << endl;
      if (sum % m == 0) cnt++;
    }
  }
  cout << cnt;
}