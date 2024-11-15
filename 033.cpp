#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll H, W;
    cin >> H >> W;
    ll ans = 0;
    if (H == 1 || W == 1) {
        ans = H * W;
    } else {
        ans = ((H + 1) / 2) * ((W + 1) / 2);
    }
    cout << ans << endl;
    return 0;
}