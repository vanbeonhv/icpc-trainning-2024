#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool ktcp(ll x) {
  ll s = (ll)sqrt(x);
  return (s * s == x);
}

int check_square(ll a1, ll b1, ll a2, ll b2, ll a3, ll b3) {
  ll area = a1 * b1 + a2 * b2 + a3 * b3;

  if (!ktcp(area)) return 0;

  if (a1 > b1) swap(a1, b1);
  if (a2 > b2) swap(a2, b2);
  if (a3 > b3) swap(a3, b3);

  ll side = (ll)sqrt(area);

  if ((a1 == a2 && a1 == a3 && (b1 + b2 + b3) == side) ||
      (b1 == b2 && b1 == b3 && (a1 + a2 + a3) == side)) {
    return side;
  }

  if ((a1 == a2 && (b1 + b2) == side && (a3 == side) &&
       (b3 == b1 || b3 == b2)) ||
      (b1 == b2 && (a1 + a2) == side && (b3 == side) &&
       (a3 == b1 || a3 == b2))) {
    return side;
  }

  return 0;
}

int main() {
  ll a1, b1, a2, b2, a3, b3;
  cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

  cout << check_square(a1, b1, a2, b2, a3, b3);

  return 0;
}