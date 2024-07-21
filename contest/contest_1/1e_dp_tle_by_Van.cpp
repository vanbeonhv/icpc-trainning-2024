#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

ll n, c, a[200000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  cin >> n >> c;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll dp[200000];
  fill_n(dp, 200000, LLONG_MAX);

  dp[0] = 0;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      ll energy = pow(a[i] - a[j], 2) + c;
      dp[i] = min(dp[i], dp[j] + energy);
    }
  }

  cout << dp[n - 1] << endl;
}