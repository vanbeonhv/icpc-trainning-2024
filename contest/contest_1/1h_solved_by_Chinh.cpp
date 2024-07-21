#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int find_max_gcd(vi& num) {
    int max_value = *max_element(num.begin(), num.end());
    
    vector<int> freq(max_value + 1, 0);

    for (int i = 0; i < num.size(); ++i) {
        freq[num[i]]++;
    }

    int max_gcd = 0;
    for (int d = max_value; d >= 1; --d) {
        int count = 0;
        for (int multiple = d; multiple <= max_value; multiple += d) {
            count += freq[multiple];
        	cout << multiple << " ";
        }
        if (count >= 2) {
            max_gcd = d;
            break;
        }
    }

    return max_gcd;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi num(n);

        for (int i = 0; i < n; ++i) {
            cin >> num[i];
        }

        cout << find_max_gcd(num) << "\n";
    }

    return 0;
}

