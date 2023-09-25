#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define forl(loop_var,initial_val,end_val) for (int loop_var = initial_val; loop_var <= end_val; loop_var++)
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
    // io_file("input.txt", "output.txt");

    // ----- WRITE CODE HERE ----- //

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char num[9];
        scanf("%s", &num);

        forl(j, 0, 8) {
            if (num[j] == '1') {
                printf("13\n");
                break;
            } else if (num[j] == '3') {
                printf("31\n");
                break;
            }
        }
    }
}