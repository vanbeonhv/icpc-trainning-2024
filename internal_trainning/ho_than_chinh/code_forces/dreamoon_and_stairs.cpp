#include<bits/stdc++.h>
using namespace std;

#define EL "\n"

int n, m; 

int count_stair(int step, int move) {
	if (step > n) {
		return -1;
	}
	
	if (step == n) {
		return move % m == 0? move : -1;
	}
	
	if ((step + 2) >= n) {
		count_stair(step + 1, move + 1);
	}
	else {
		count_stair(step + 2, move + 1);
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	
	cout << count_stair(0, 0) << EL;
	
	return 0;
}
