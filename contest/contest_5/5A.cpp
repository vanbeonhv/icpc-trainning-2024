#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int cnt_s[28], cnt_t[28];

bool find(int x) {
  for (int i = 0; i < 28; i++) {
    if (cnt_t[i] == x) {
      cnt_t[i] = 0;
      return true;
    }
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  string s, t;
  cin >> s >> t;

  for (char c : s) {
    cnt_s[c - 97]++;
  }

  for (char c : t) {
    cnt_t[c - 97]++;
  }
  for (int i = 0; i < 28; i++) {
    if (cnt_s[i] != 0 && cnt_s[i] == cnt_t[i]) {
      cnt_s[i] = cnt_t[i] = 0;
    }
  }

  for (int i = 0; i < 28; i++) {
    if (cnt_s[i] == 0) continue;
    if (!find(cnt_s[i])) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}