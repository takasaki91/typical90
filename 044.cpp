#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, Q;
    cin >> N >> Q;
    ll A[N] = {0};
    ll head_index = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < Q; i++) {
        ll t, x, y;
        cin >> t >> x >> y;
        x--;
        y--;
        ll index_x = (x + head_index) % N;
        ll index_y = (y + head_index) % N;
        if (t == 1) {
            swap(A[index_x], A[index_y]);
        } else if (t == 2) {
            head_index--;
            if (head_index < 0) {
                head_index += N;
            }
        } else if (t == 3) {
            cout << A[index_x] << endl;
        }
    }
    return 0;
}