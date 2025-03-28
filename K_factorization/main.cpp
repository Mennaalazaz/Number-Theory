#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
/*
You can factorize n, store all multipliers in a list,
and while size of this list is greater than k, take any two elements of this list and replace them with their product.
If the initial size of this list is less than k, then answer is -1.
 */
vector<int> factorize(int n) {
    vector<int> factors;
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

void solve() {
    int n, k; cin >> n >> k;

    vector<int> factors = factorize(n);

    if (factors.size() < k) {
        cout << -1 << endl;
    } else {
        // The first k-1 factors are individual, the rest are multiplied together
        for (int i = 0; i < k - 1; ++i) {
            cout << factors[i] << " ";
        }
        int product = 1;
        for (int i = k - 1; i < factors.size(); ++i) {
            product *= factors[i];
        }
        cout << product << " ";
        cout << endl;
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}