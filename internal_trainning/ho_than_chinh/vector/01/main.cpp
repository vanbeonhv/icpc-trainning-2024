#include <bits/stdc++.h>
using namespace std;

typedef vector <int> vi;

#define EL "\n"

int main () {
	// Fast I/O
	ios_base::sync_with_stdio(false);
	
	vi my_vi;
	
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int tt; cin >> tt;
		
		if (tt == 1) {
			int x; cin >> x;
			my_vi.push_back(x);
			continue;
		} 
		
		if (tt == 2) {
			if (!my_vi.empty()) {
				my_vi.pop_back();
			}
		};
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
