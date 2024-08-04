#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ii pair<int, int>

using namespace std;
const int MOD = 1e9 + 7;

int n, m, higher, dis;
vector<ii> a, b;

void dfs({x, y}) {
  dis += for (int i = 0; i < higher; i++) {
    for (int j = 0; j <= 1; j++) {
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

  cin >> n >> m;

  higher = n > m ? n : m;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    a.push_back({x, y});
  }

  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    b.push_back({x, y});
  }

  dfs(a[0]);

#endif
}