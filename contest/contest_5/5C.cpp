#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, k;

ll total(int a[], int x) {
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += pow(abs(a[i] - x), k);
  }
  return sum;
}

double total2(int a[], double x) {
  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += pow(abs(a[i] - x), k);
  }
  return sum;
}

double tb(int a[]) {
  double sum = 0;
  for (int i = 0; i < n; i++) sum += a[i];
  return sum / n;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  if (k == 1) {
    sort(a, a + n);
    int x = a[n / 2];
    cout << fixed << setprecision(2) << static_cast<double>(total(a, x));
  } else {
    double x = tb(a);
    cout << fixed << setprecision(2) << total2(a, x);
  }
}