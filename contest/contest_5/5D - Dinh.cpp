#include <algorithm>
#include <iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int i, n, k;
  cin >> n >> k;
  int a[100000];

  for (i = 0; i < n; i++) cin >> a[i];

  sort(a, a + n);
  int min = 2147483647;

  for (i = 0; i < n; i++) {
    if (k - 1 + i >= n)
      break;
    else if ((min > a[k - 1 + i] - a[i]) && (a[k - 1 + i] - a[i] >= 0))
      min = a[k - 1 + i] - a[i];
  }
  cout << min;
  return 0;
}