#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mint = 1000000007;
int main() {
    ll N;
    cin >> N;
    vector<ll> A(2 * N);
    ll total = 0;
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
        A[i + N] = A[i];
        total += A[i];
    }
    vector<ll> B(2 * N + 1, 0);
    for (ll i = 1; i < (ll)B.size(); i++) {
        B[i] = B[i - 1] + A[i - 1];
    }
    bool flag = false;
    for (int i = 0; i < N + 1; i++) {
        int l = i, r = i + N;
        while (r - l > 1) {
            int mid = (r - l) / 2 + l;
            if ((B[mid] - B[i]) * 10 > total) {
                r = mid;
            } else if ((B[mid] - B[i]) * 10 == total) {
                flag = true;
                break;
            } else {
                l = mid;
            }
        }
        if (flag) {
            break;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}