#include<bits/stdc++.h>
using namespace std;

#define EL "\n"

int count_way(int s, int e) {
	if (s == e) {
		return 1;
	}
	
	if (s > e) {
		return 0;
	}
	else {
		return count_way(s + 1, e) + count_way(s + 2, e) + count_way(s + 3, e);
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	
	int s, e; cin >> s >> e;
	
	cout << count_way(s, e) << EL;
	
	return 0;
}
