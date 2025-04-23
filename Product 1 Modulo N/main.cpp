#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> coprimes;
    for (int i = 1; i < n; ++i) {
        if (__gcd(i, n) == 1) {
            coprimes.push_back(i);
        }
    }

    long long product = 1;
    for (int num : coprimes) {
        product = (product * num) % n;
    }

    vector<int> result;
    if (product == 1) {
        result = coprimes;
    } else {
        for (int num : coprimes) {
            if (num != product) {
                result.push_back(num);
            }
        }
    }

    cout << result.size() << endl;
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i]<<' ';
    }

    return 0;
}