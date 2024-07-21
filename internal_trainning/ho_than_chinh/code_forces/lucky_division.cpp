#include<bits/stdc++.h>
using namespace std;

bool is_num_lucky(int num) {
	string s_num = to_string(num);
	
	for (char c: s_num) {
		if (c != '4' && c != '7') {
			return false;
		}
	}
	
	return true;
}

int main () {
	ios_base::sync_with_stdio(false);
	int n; cin >> n;
	
	if (is_num_lucky(n)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	
	
	
	return 0;
}
