#include<bits/stdc++.h>
using namespace std;

typedef vector <pair <int, int>> vp;
#define EL "\n"

int main(){
  ios_base::sync_with_stdio(false);
  
  int n; cin >> n;
  vp my_v(n);
  for (int i = 0; i < n; ++i) {
  	int x, y; cin >> x >> y;
  	my_v.push_back(make_pair(x, y));
  }
  
  // Can kiem tra lai
  for (auto it: my_v) {
  	int x = sqrt((it.first * it.first) + (it.second * it.second));
  	cout << fixed << setprecision(2) << x << " ";
  }
  
  return 0;
}
