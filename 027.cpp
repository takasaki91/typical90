#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    set<string> st;
    vector<ll> ans;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if (st.count(s) == 0) {
            st.insert(s);
            ans.push_back(i + 1);
        }
    }
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}