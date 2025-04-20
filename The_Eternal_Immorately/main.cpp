#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
void fastIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
}

int main() {
    fastIO();
    ll a,b; cin>>a>>b;
    ll last_digit =1;
    if(b-a>=10)  last_digit=0;
    else {
        for(ll i=b;i>=a+1;i--) {
            last_digit*=(i%10);
        }
    }
    cout<<last_digit%10;
}