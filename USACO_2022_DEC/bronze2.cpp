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
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        int numCows = 0, maxMoves = 0;
        cin >> numCows >> maxMoves;
        string breeds;
        cin >> breeds;

        // init
        string res = "";
        for (int j = 0; j < numCows; j++) {
            res += ".";
        }

        // now
        int lastG = -1 - maxMoves;
        int lastH = -1 - maxMoves;
        int patchesUsed = 0;
        for (int pos = 0; pos < numCows; pos++) {
            char cowType = breeds[pos];
            if (cowType == 'G' && abs(pos - lastG) > maxMoves) {
                patchesUsed++;
                lastG = pos + maxMoves;
                if (lastG >= numCows) {
                    lastG = numCows - 1;
                }
                while (res[lastG] == 'H') {
                    lastG--;
                }
                res[lastG] = 'G';
            } else if (cowType == 'H' && abs(pos - lastH) > maxMoves) {
                patchesUsed++;
                lastH = pos + maxMoves;
                if (lastH >= numCows) {
                    lastH = numCows - 1;
                }
                while (res[lastH] == 'G') {
                    lastH--;
                }
                res[lastH] = 'H';
            }
        }
        cout << patchesUsed << endl << res << endl;
    }
}