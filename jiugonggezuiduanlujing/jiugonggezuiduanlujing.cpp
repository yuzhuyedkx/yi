#include<iostream>
using namespace std;
void minPathSum(double g[3][3]);
void printf(double g[3][3]);
int main() {
    double grid[3][3] = { {1,1,2},{7,1,7},{3,5,9} };
    printf(grid);
    cout << "3×3的九宫格中最短路径为(从左上到右下)：" << endl;
    minPathSum(grid);
    return 0;
}
void printf(double g[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << g[i][j] << "    ";
        }
        cout<< endl;
    }
}
void minPathSum(double g[3][3]) {
    int sum = 0;
    int r = 0;
    int c = 0;
    while (c < 3&&r < 3) {
        if(r<2&&c<2)
        {
            if (g[r][c + 1] < g[r + 1][c]) {
                sum += g[r][c + 1];
                c++;
                cout << g[r][c] << " ";
            }
            else {
                sum += g[r + 1][c];
                r++;
                cout << g[r][c] << " ";
            }
        }
        else
        {
            if (r == 2 && c < 2) {
                sum += g[r][c + 1];
                cout << g[r][c + 1] << " ";
                r++;
            }
            if (c == 2 && r < 2) {
                sum += g[r + 1][c];
                cout << g[r + 1][c] << " ";
                c++;
            }
        }
    }
    cout << "sum=" << sum << endl;
}