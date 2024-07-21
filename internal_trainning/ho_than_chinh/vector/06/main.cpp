#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
#define EL "\n"

int main(){
  ios_base::sync_with_stdio(false);
  
  int n; cin >> n;
  vi my_vi(n);
  
  for (int i =0; i < n; ++i) cin >> my_vi[i];
  
  cout << *max_element(my_vi.begin(), my_vi.end()) << EL;  
  cout << *min_element(my_vi.begin(), my_vi.end()) << EL;
  // gia tri khoi tao de cong don
  cout << accumulate(my_vi.begin(), my_vi.end(), 0) << EL;
  return 0;
}
