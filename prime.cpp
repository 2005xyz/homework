#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s;
    vector<int> if_s(20001, 1);
    for (int i = 2; i < 20001; i++) {
        if (if_s[i]) s.push_back(i);
        for (int j : s) {
            if (1LL * j * i > 20000) break;
            if_s[j * i] = 0;
            if (i % j == 0) break;
        }
    }

    int p = 0;
    while (p < (int)s.size()) {
        int cnt = 0;
        while (cnt < 5 && p < (int)s.size()) {
            cout << s[p] << ' ';
            p++;
            cnt++;
        }
        cout << endl;
    }
    return 0;
}
