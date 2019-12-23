#include <bits/stdc++.h>
using namespace std;

int n, k;
int divs[1000000];
pair<int, int> other[1000000];
int used[1000000];
bool q[1000000];
int sum;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++ i) {
        cin >> divs[i];
    }
    cin >> k;
    for (int i = 0; i < k; ++ i) {
        int ind, len;
        cin >> ind >> len;
        q[ind] = true;
        divs[ind] += len;
    }
    for (int i = n - 1; i >= 0; -- i) {
        for (int j = i - 1; j >= 0; -- j) {
            if (divs[i] >= other[j].second) { other[j] = { i, divs[i] }; }
        }
    }
    for (int i = 0; i < n - 1; ++ i) {
        if (used[other[i].first]) { 
            if (q[i]) { -- k; }
            continue;
        } 
        sum += (min(divs[i], other[i].second) * (other[i].first - i));
        used[other[i].first] = true;
    }
    cout << k << ' ' << sum << endl;
    return 0;
}