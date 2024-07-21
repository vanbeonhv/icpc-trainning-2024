#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, st, en, u, d, step, minStep = INT_MAX;
unordered_map<int, int> mp;

void Try(int x) {
  // cout << x << " " << step << endl;
  if (x == en) {
    minStep = min(step, minStep);
    return;
  }

  for (int i = 0; i <= 1; i++) {
    step++;

    if (i == 0 && x + u <= n && u != 0) {
      if (mp[x + u] == 0) {
        mp[x + u] = 1;
        Try(x + u);
      }
    } else if (i == 1 && x - d >= 1 && d != 0) {
      if (mp[x - d] == 0) {
        mp[x - d] = 1;
        Try(x - d);
      }
    }
    step--;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
  cin >> n >> st >> en >> u >> d;

  mp[st] = 1;
  Try(st);
  if (minStep == INT_MAX) {
    cout << -1;
  } else {
    cout << minStep;
  }
}