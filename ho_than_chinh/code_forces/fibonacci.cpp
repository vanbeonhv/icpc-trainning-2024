#include<bits/stdc++.h>
using namespace std;

int fibonacci (int num) {
	
	if (num == 1) {
		return 0;
	}
	
	if (num == 2) {
		return 1;
	}
	
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main () {
	ios_base::sync_with_stdio(false);
	int num; cin >> num;
	cout << fibonacci(num) << " ";
	
}
