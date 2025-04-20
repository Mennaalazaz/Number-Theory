#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}
ll fastpower(ll a, ll b) {
    if(b == 0) return 1;
    if(b == 1) return a;

    ll result = 1;
    if(b&1) { result = a; }
    ll halfPower = fastpower(a, b/2);
    result = result * halfPower*halfPower;
    return result;
}

int main() {
    fastIO();
    ll n,m; cin>>n>>m;
    if(n<=27) {
        n=fastpower(2,n);
        cout<<m%n<<endl;
    }
    else {
        cout<<m<<endl;
    }
}