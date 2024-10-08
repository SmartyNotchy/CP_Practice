#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define io_optimize() ios::sync_with_stdio(0); cin.tie(0);
#define io_file(input_file, output_file) freopen(input_file, "r", stdin); freopen(output_file, "w", stdout);

const int WIDTH = 1000;

int main() {
    // io_optimize();
    io_file("paintbarn.in", "paintbarn.out");

    // ----- WRITE CODE HERE ----- //
    int n, k;
    cin >> n >> k;
    
    int barn[WIDTH+1][WIDTH+1];
    
    for (int _ = 0; _ < n; _++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        barn[x1][y1]++;
        barn[x2][y1]--;
        barn[x1][y2]--;
        barn[x2][y2]++;
    }

    int res = 0;

    for (int x = 0; x < WIDTH; x++) {
        for (int y = 0; y < WIDTH; y++) {
            if (x > 0) barn[x][y] += barn[x-1][y];
            if (y > 0) barn[x][y] += barn[x][y-1];
            if (x > 0 && y > 0) barn[x][y] -= barn[x-1][y-1];
            res += (barn[x][y] == k);
        }
    }

    cout << res << endl;/**/
}