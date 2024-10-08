#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;

#define io_optimize() ios::sync_with_stdio(0); cin.tie(0);
#define io_file(input_file, output_file) freopen(input_file, "r", stdin); freopen(output_file, "w", stdout);

int main() {
    io_optimize();
    // io_file("input.txt", "output.txt");

    // ----- WRITE CODE HERE ----- //
    ll numCows;
    vector<ll> cows;

    cin >> numCows;
    for (ll i = 0; i < numCows; i++) {
        ll price;
        cin >> price;
        cows.push_back(price);
    }

    sort(cows.begin(), cows.end());

    ll maxP = -1;
    ll optP = -1;
    for (ll price : cows) {
        if (price * numCows > maxP) {
            optP = price;
            maxP = price * numCows;
        }
        numCows -= 1;
    }

    cout << maxP << " " << optP << endl;
}