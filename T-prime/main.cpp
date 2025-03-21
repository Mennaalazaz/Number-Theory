#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const ll N = 1e6 + 7; // Sieve size up to 1e6 (since sqrt(1e12) = 1e6)
bool primes[N];
void sieve() { // n(log n)
    fill(primes, primes + N, true);
    primes[0] = primes[1] = false;
    for (ll i = 2; i * i < N; i++) {
        if (primes[i]) {
            for (ll j = i * i; j < N; j += i) {
                primes[j] = false;
            }
        }
    }
}

bool isTPrime(ll x) {
    ll sqrtX = sqrt(x);
    if (sqrtX * sqrtX != x) return false; // Check if x is a perfect square
    return primes[sqrtX]; // Check if the square root is a prime
}

void solve() {
    sieve();
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) {
        if (isTPrime(v[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}