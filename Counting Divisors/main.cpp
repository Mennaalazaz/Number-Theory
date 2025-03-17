#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 1e6 + 10;
vector<int> cntarray(N, 0);

void cntDivisors() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            cntarray[j]++;
        }
    }
} //   بعد عند الرقم كل مضاعقاته
// seive method => O(n log n) instead of O(n root n)

void solve() {
    cntDivisors(); // Precompute once
    int n; cin >> n;
    while (n--) {
        int c;
        cin >> c;
        cout << cntarray[c] << "\n";
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}
