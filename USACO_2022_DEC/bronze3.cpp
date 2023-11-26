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
    // io_file("input.txt", "output.txt");

    // ----- WRITE CODE HERE ----- //
    int testCases = 0;
    cin >> testCases;
    for (int t = 0; t < testCases; t++) {
        string temp;
        //cin >> temp;

        int strLen = 0, inputs = 0;
        cin >> strLen >> inputs;

        set<string> zeros;
        set<string> ones;

        bool isOk = true;

        for (int i = 0; i < inputs; i++) {
            string inp;
            int res;
            cin >> inp >> res;

            if (!isOk) {
                continue;
            }

            if (inp[0] == '1') {
                for (int j = 0; j < strLen; j++) {
                    if (inp[j] == '1') {
                        inp[j] = '0';
                    } else {
                        inp[j] = '1';
                    }
                }
                res = (res + 1) % 2;
            }

            if (res == 0) {
                zeros.insert(inp);
                if (ones.find(inp) != ones.end()) {
                    isOk = false;
                }
            } else if (res == 1) {
                ones.insert(inp);
                if (zeros.find(inp) != zeros.end()) {
                    isOk = false;
                }
            }
        }

        if (isOk) {
            cout << "OK\n";
        } else {
            cout << "LIE\n";
        }
    }
}