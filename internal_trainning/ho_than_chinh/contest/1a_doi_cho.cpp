#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    int M;
    cin >> M;

    vector<int> a(M);
    for (int i = 0; i < M; ++i) {
        cin >> a[i];
    }

    vector<bool> flipped(n + 1, false);

    for (int i = 0; i < M; ++i) {
        int ai = a[i];
        int start = ai - 1;
        int end = n - ai;
        flipped[start] = !flipped[start];
        if (end + 1 < n) {
            flipped[end + 1] = !flipped[end + 1];
        }
    }

    string result = s;
    bool reverse = false;
    for (int i = 0; i < n; ++i) {
        if (flipped[i]) {
            reverse = !reverse;
        }
        if (reverse) {
            result[i] = s[n - 1 - i];
        } else {
            result[i] = s[i];
        }
    }

    cout << result << "\n";

    return 0;
}

