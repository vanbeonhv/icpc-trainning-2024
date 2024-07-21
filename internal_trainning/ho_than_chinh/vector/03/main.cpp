#include <bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
#define EL "\n"

int main () {
	ios_base::sync_with_stdio(false);
	
	int n; cin >> n;
	vi my_vi(n);
	
	for (int i = 0; i < n; ++i) cin >> my_vi[i];
	
	// sap xep tang dan - default
	sort(my_vi.begin(), my_vi.end());
	for (auto it: my_vi) cout << it << " "; 
	
	cout << EL;
	// sap xep giam dan - func: greater <int> ()
	sort(my_vi.begin(), my_vi.end(), greater <int> ());
	for (auto it: my_vi) cout << it << " "; 

	return 0;
}
