// https://codeforces.com/contest/476/problem/A
#include <bits/stdc++.h>

#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m, step;
int result = 100000;

void dfs(int x) {
  if (x > n) return;
  if (x == n) {
    if (step % m == 0) {
      result = min(step, result);
    }
    return;
  }

  for (int i = 1; i <= 2; i++) {
    x += i;
    step++;
    dfs(x);
    step--;
    x -= i;
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  cin >> n >> m;
  dfs(0);
  if (result == 100000)
    cout << -1;
  else
    cout << result;
}