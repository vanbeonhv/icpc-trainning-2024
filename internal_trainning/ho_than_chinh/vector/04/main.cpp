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
  
  for (auto it = my_vi.begin() + l; it <= my_vi.begin() + r; ++it) cout << *it << " ";
  
  cout << EL;
  
  for (auto it = my_vi.begin() + r; it >= my_vi.begin() + l; --it) cout << *it << " ";
  return 0;
}
