#include <math.h>

#include <iostream>
#define maxn 1000005
using namespace std;

bool np[maxn];
int n, cnt;

/// sàng nguyên tố
int prime[1000001];

void sang(int n) {
  for (int i = 0; i <= n; i++) {
    prime[i] = 1;
  }
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (prime[i]) {
      for (int j = i * i; j <= n; j += i) {
        prime[j] = 0;
      }
    }
  }
}

int main() {
  cin >> n;
  sang(n);
  cnt = 0;

  for (int i = 3; i <= n - 4; ++i)
    if (prime[i] && i <= n - i) cnt += prime[n - i];

  cout << cnt;
}