#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<bool> is_prime = sieve(n);
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    int count = 0;
    for (int i = 0; i < primes.size()-1; ++i) {
        int sum = primes[i] + primes[i+1] + 1;
        if (sum <= n && is_prime[sum]) {
            count++;
        }
    }

    if (count >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}