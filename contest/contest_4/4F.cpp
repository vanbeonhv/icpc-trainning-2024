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
  int a, b, c;
  cin >> a >> b >> c;

  vector<string> gdich;
  unordered_map<string, int> freq;

  vector<string> order;
  unordered_map<string, int> sl;

  // Lưu thứ tự id vào vector "order".
  // Lưu tổng số lượng vào map "sl"
  for (int i = 0; i < a; i++) {
    string x;
    int y;
    cin >> x >> y;
    //Đẩy các id hợp lệ (so luong >= 20) vao vector
    if (find(order.begin(), order.end(), x) == order.end()) {
      order.push_back(x);
    }
    sl[x] += y;
  }

  //
  for (string i : order) {
    if (sl[i] >= 20) {
      gdich.push_back(i);
      freq[i]++;
    }
  }

  order.clear();
  sl.clear();

  for (int i = 0; i < b; i++) {
    string x;
    int y;
    cin >> x >> y;
    if (find(order.begin(), order.end(), x) == order.end()) {
      order.push_back(x);
      sl[x] += y;
    }
  }
  for (string i : order) {
    if ((find(gdich.begin(), gdich.end(), i) != gdich.end()) && sl[i] >= 20) {
      freq[i]++;
    }
  }

  order.clear();
  sl.clear();

  for (int i = 0; i < c; i++) {
    string x;
    int y;
    cin >> x >> y;
    if (find(order.begin(), order.end(), x) == order.end()) {
      order.push_back(x);
      sl[x] += y;
    }
  }
  for (string i : order) {
    if ((find(gdich.begin(), gdich.end(), i) != gdich.end()) && sl[i] >= 20) {
      freq[i]++;
    }
  }

  //Đếm số lượng id hợp lệ
  int cnt = 0;
  vector<string> res;
  for (string i : gdich) {
    // cout << "i: " << i << " sl[i]: " << sl[i] << endl;

    if (freq[i] == 3) {
      cnt++;
      res.push_back(i);
    }
  }

  cout << cnt << " ";
  for (string i : res) cout << i << " ";
}