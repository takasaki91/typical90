#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll A, ll B) {
    if (A > B) {
        swap(A, B);
    }
    if (A == 0) {
        return B;
    }
    return gcd(A, B % A);
}
ll lcm(ll A, ll B) { return A / gcd(A, B) * B; }

int main() {
    ll A, B;
    cin >> A >> B;
    ll num = 1e18;
    num /= (A / gcd(A, B));
    if (num < B) {
        cout << "Large" << endl;
    } else {
        cout << lcm(A, B) << endl;
    }
    return 0;
}