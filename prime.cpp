#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s;
    vector<int> if_s(20001, 1);
    if_s[0] = if_s[1] = 0;

    for (int i = 3; i < 20001; i += 2) {
        if (if_s[i]) s.push_back(i);
        for (int j : s) {
            int64_t x = 1LL * j * i;
            if (x > 20000) break;
            if_s[x] = 0;
            if (i % j == 0) break;
        }
    }

    cout << 2 << ' ';
    int p = 0;
    int cnt = 1;
    while (p < (int)s.size()) {
        cout << s[p] << ' ';
        p++;
        cnt++;
        if (cnt % 5 == 0) cout << '\n';
    }
    cout << endl;
    return 0;
}
