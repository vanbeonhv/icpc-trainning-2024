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

  ll prefix_sum = 0;
  unordered_map<int, int> mod_cnt;
  mod_cnt[0] = 1;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    prefix_sum += x;

    ll mod_sum = (prefix_sum % m + m) % m;
    cnt += mod_cnt[mod_sum];
    mod_cnt[mod_sum]++;
  }
  cout << cnt;
}