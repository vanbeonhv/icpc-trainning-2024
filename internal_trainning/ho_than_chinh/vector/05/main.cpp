#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
#define EL "\n"

int main(){
  ios_base::sync_with_stdio(false);
  
  int n; cin >> n;
  vi my_vi(n);
  
  for (int i = 0; i < n; ++i) cin >> my_vi[i];
  
  int l, r; cin >> l >> r;
  
  // dao nguoc mang trong vector
  reverse(my_vi.begin(), my_vi.end());
  
  for (auto it: my_vi) cout << it << " ";
  
  cout << EL;
  // dao nguoc vi tri trong vector : L - R
  
  reverse(my_vi.begin() + l, my_vi.begin() + r + 1);
  for (auto it: my_vi) cout << it << " ";

  return 0;
}
