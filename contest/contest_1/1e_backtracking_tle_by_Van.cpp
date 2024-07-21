#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, c, a[200000];
ll energy, minEnergy = INT_MAX;

void Try(int x) {
  if (energy > minEnergy) return;

  if (x == n - 1) {
    minEnergy = min(energy, minEnergy);
    return;
  }

  for (int i = 1; i < n - x; i++) {
    energy += pow(a[x + i] - a[x], 2) + c;
    // cout << a[x] << " " << a[x + i] << endl;
    Try(x + i);
    energy -= pow(a[x + i] - a[x], 2) + c;
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

  cin >> n >> c;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  Try(0);
  cout << minEnergy << endl;

  // int k = 3;
  // while (k--) {
  //   cin >> n >> c;
  //   for (int i = 0; i < n; i++) {
  //     cin >> a[i];
  //   }
  //   Try(0);
  //   cout << minEnergy << endl;
  //   minEnergy = INT_MAX;
  //   energy = 0;
  //   memset(a, 0, sizeof(a));
  // }
}