#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define io_optimize() ios::sync_with_stdio(0); cin.tie(0);
#define forl(loop_var,initial_val,end_val) for (int loop_var = initial_val; loop_var <= end_val; loop_var++)
#define rep(times) for (int i = 1; i <= times; i++)
#define io_file(input_file, output_file) freopen(input_file, "r", stdin); freopen(output_file, "w", stdout);

/* 
---------------------------------------
scanf/printf Cheat Sheet

%d - Signed Int
%f - Float
%i - Unsigned Int
%ld, %li - Long
%lf - Double
%Lf - Long Double
%lu - Unsigned Long
%lli, %lld - Long Long
%llu - Unsigned Long Long
%s - String

%.9f - Floating Point (9 Dec Places)
---------------------------------------
Primitive Types Cheat Sheet

int: -2e9 to 2e9
ll: -9e18 to 9e18
double: floating-point (64 bits)
long double: floating-point (80 bits)
---------------------------------------
*/

int main() {
    io_optimize();
    io_file("speeding.in", "speeding.out");

    // ----- WRITE CODE HERE ----- //
    int n, m;
    cin >> n >> m;

    vector<int> l(100);
    vector<int> b(100);
    int worst = 0;

    int c = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = c; j < c + x; j++) {
            l[j] = y;
        }
        c += x;
    }

    c = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = c; j < c + x; j++) {
            b[j] = y;
        }
        c += x;
    }

    for (int i = 0; i < 100; i++) {
        int diff = b[i] - l[i];
        if (diff > worst) {
            worst = diff;
        }
    }

    cout << worst;
}