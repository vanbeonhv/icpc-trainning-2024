#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int X[50], cot[50], xuoi[50], nguoc[50], n, cnt;

void Try(int i) {
  for (int j = 1; j <= n; j++) {
    if (cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0) {
      cot[j] = 1;
      xuoi[i - j + n] = 1;
      nguoc[i + j - 1] = 1;
      if (i == n) {
        cnt++;
      } else {
        Try(i + 1);
      }
      cot[j] = 0;
      xuoi[i - j + n] = 0;
      nguoc[i + j - 1] = 0;
    }
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

  cin >> n;
  Try(1);
  cout << cnt;
}