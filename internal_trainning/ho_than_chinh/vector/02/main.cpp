#include <bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
#define EL "\n"

int main () {
	ios_base::sync_with_stdio(false);
	
	int m; cin >> m;
	vi my_vi(m);
	
	for (int i = 0; i < m; ++i) cin >> my_vi[i];
	
	int n; cin >> n;
	while (n--) {
		int tt, ind; cin >> tt >> ind;
		
		if (tt == 1) {
			if (ind < 0 || ind > m) {
				continue;
			}
			int x; cin >> x;
			my_vi.insert(my_vi.begin() + ind, x);
			continue;
		}
		
		if (tt == 2) {
			if (ind < 0 || ind > (m - 1)) {
				continue;
				my_vi.erase(my_vi.begin() + ind);
			}
		}
	}
	
	if (my_vi.empty()) {
		cout << "EMPTY" << EL;
	}
	else {
		for (auto it: my_vi) {
			cout << it << " ";
		}
	}
	
	return 0;
}


