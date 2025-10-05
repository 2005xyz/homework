#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long prefix = 0;   
    long long minPrefix = 0;    
    long long maxSubSum = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        prefix += a[i];
        maxSubSum = max(maxSubSum, prefix - minPrefix);
        minPrefix = min(minPrefix, prefix);
    }

    cout << maxSubSum << endl;
    return 0;
}
