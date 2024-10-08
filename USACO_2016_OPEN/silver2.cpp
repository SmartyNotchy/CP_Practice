#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define io_optimize() ios::sync_with_stdio(0); cin.tie(0);
#define io_file(input_file, output_file) freopen(input_file, "r", stdin); freopen(output_file, "w", stdout);

int main() {
    io_optimize();
    io_file("diamond.in", "diamond.out");

    // ----- WRITE CODE HERE ----- //
    ll n, k;
    cin >> n >> k;

    vector<ll> diamonds;

    for (ll _ = 0; _ < n; _++) {
        ll d;
        cin >> d;
        diamonds.push_back(d);
    }

    sort(diamonds.begin(), diamonds.end());
    ll left1 = 0;
    ll right1 = 1;
    ll best1 = 0;

    while (right1 < n) {
        if (diamonds[right1] - diamonds[left1] > k) {
            left1++;
        } else {
            if (right1 - left1 + 1 > best1) {
                best1 = right1 - left1 + 1;
            }
            right1++;
        }
    }

    ll left2 = 0;
    ll right2 = 1;
    ll best2 = 0;

    while (right2 < left1) {
        if (diamonds[right2] - diamonds[left2] > k) {
            left2++;
        } else {
            if (right2 - left2 + 1 > best2) {
                best2 = right2 - left2 + 1;
            }
            right2++;
        }
    }

    ll left3 = right1;
    ll right3 = right1+1;
    ll best3 = 0;

    while (right3 < n) {
        if (diamonds[right3] - diamonds[left3] > k) {
            left3++;
        } else {
            if (right3 - left3 + 1 > best3) {
                best3 = right3 - left3 + 1;
            }
            right3++;
        }
    }

    cout << best1+max(best2,best3);
}