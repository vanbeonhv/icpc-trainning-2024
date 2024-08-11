#include <iostream>

using namespace std;

int main() {
  int x, n;
  cin >> n;
  x = n / 4;
  int kt = 0;
  for (int i = 0; i <= x; i++)
    for (int j = 0; j <= x; j++)
      if (4 * i + 7 * j == n) {
        kt = 1;
        break;
      }
  if (kt == 1)
    cout << "Yes";
  else
    cout << "No";
  return 0;
}
