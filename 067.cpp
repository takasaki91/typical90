#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string N;
    ll K;
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        ll val = 0;
        reverse(N.begin(), N.end());
        ll v = 1;
        for (int j = 0; j < (int)N.size(); j++) {
            val += v * (N[j] - '0');
            v *= 8;
        }
        N = "";
        if (val == 0) {
            N = "0";
            break;
        } else {
            while (val > 0) {
                N = to_string(val % 9) + N;
                val /= 9;
            }
            for (int j = 0; j < (int)N.size(); j++) {
                if (N[j] == '8') {
                    N[j] = '5';
                }
            }
        }
    }
    cout << N << endl;
    return 0;
}