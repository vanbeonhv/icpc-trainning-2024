// Bài này phải nhớ là cùng 1 dòng input có thể có nhiều số thỏa mãn.
// Nên cần bóc tách từng số trong 1 input

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

bool isValidNumber(string s) {
  try {
    ll x = stoll(s);
    if (x <= INT_MAX) {
      return false;
    }
    return true;
  } catch (invalid_argument e) {
    return false;
  } catch (std::out_of_range e) {
    return false;
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

  string line;
  ll sum = 0;

  while (getline(cin, line)) {
    string numString;
    for (char c : line) {
      if (isdigit(c)) {
        numString += c;
      } else {
        if (!numString.empty() && isValidNumber(numString)) {
          // cout << numString << endl;
          sum += stoll(numString);
        }
        numString = "";
      }
    }

    if (!numString.empty() && isValidNumber(numString)) {
      // cout << numString << endl;
      sum += stoll(numString);
    }
  }

  cout << sum;
}