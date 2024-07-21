#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
typedef pair<ll, int> lli;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  int n, c;
  cin >> n >> c;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  priority_queue<lli, vector<lli>, greater<lli>> q;
  vector<ll> minEnergy(n, LLONG_MAX);
  minEnergy[0] = 0;

  q.push({0, 0});

  while (!q.empty()) {
    ll currentEnergy = q.top().first;
    int x = q.top().second;
    q.pop();

    if (currentEnergy > minEnergy[x]) continue;

    // relax
    for (int i = x + 1; i < n; i++) {
      ll newEnergy = currentEnergy + (ll)(pow(a[i] - a[x], 2) + c);
      if (newEnergy < minEnergy[i]) {
        minEnergy[i] = newEnergy;
        q.push({newEnergy, i});
      }
    }
  }

  cout << minEnergy[n - 1] << endl;
}