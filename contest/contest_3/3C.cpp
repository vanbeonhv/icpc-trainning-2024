#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, ok, total;
int cash[] = {4, 7};

void dfs(int x) {
  total += x;
  if (total == n) {
    ok = 1;
    return;
  }

  for (int i = 0; i <= 1; i++) {
    if (total + cash[i] <= n) {
      dfs(cash[i]);
      total -= cash[i];
    }
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
  cin >> n;
  dfs(0);

  if (ok)
    cout << "Yes";
  else
    cout << "No";

  return 0;
}