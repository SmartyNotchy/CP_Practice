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
    io_file("shell.in", "shell.out");

    // ----- WRITE CODE HERE ----- //
    int n;
    cin >> n;

    vector<int> g = {0, 0, 0};
    vector<int> s = {0, 1, 2};
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a -= 1;
        b -= 1;
        c -= 1;
        swap(s[a], s[b]);
        g[s[c]] += 1;
    }

    cout << max({g[0], g[1], g[2]});
}