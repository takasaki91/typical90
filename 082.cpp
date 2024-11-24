#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;

using mint = modint1000000007;

mint func(ull n) {
    mint ret = 0;
    int lim = to_string(n).size();
    for (int i = 0; i < lim; i++) {
        ull start = 1;
        ull end = 1;
        for (int j = 0; j < i; j++) {
            start *= 10;
        }
        end = start * 10 - 1;
        end = min(end, n);
        mint ms = start;
        mint me = end;
        mint val = (i + 1) * (me + ms) * (me - ms + 1) / 2;
        ret += val.val();
    }
    return ret;
}
int main() {
    ull L, R;
    cin >> L >> R;
    mint l_ans = func(L - 1);
    mint r_ans = func(R);
    mint ans = r_ans - l_ans;
    cout << ans.val() << endl;
    return 0;
}