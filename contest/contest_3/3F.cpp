#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

ll gcd(ll a, ll b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

ll fibo(ll n, ll m) {
  if (n == 0) return 0;
  if (n == 1) return 1;

  ll prev = 0, cur = 1;
  for (int i = 2; i <= n; i++) {
    ll next = (prev + cur) % m;
    prev = cur;
    cur = next;
  }
  return cur;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    ll a, b, m;
    cin >> a >> b >> m;

    ll fa = fibo(a, m);
    ll fb = fibo(b, m);
    // cout << "fa: " << fa << " "
    //      << "fb: " << fb << endl;
    cout << gcd(fa, fb) << endl;
  }
  return 0;
}