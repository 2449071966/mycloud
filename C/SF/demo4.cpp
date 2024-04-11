#include <stdio.h>

#define N 5  // 项目数量
#define M 5  // 总投资额度

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int fi[N][M+1]) {
    int dp[N+1][M+1];

    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= M; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = max(dp[i-1][j], fi[i-1][j] + dp[i-1][j-i]);
            }
        }
    }

    return dp[N][M];
}

int main() {
    int fi[N][M+1] = {
        {0, 0, 0, 0, 0, 0},
        {0, 11, 0, 2, 20, 0},
        {0, 12, 5, 10, 21, 0},
        {0, 13, 10, 30, 22, 0},
        {0, 14, 15, 32, 23, 0},
        {0, 15, 20, 40, 24, 0}
    };

    int result = knapsack(fi);
    printf("最大投资效益为：%d\n", result);

    return 0;
}
