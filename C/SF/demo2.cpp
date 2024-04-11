#include <stdio.h>

// 有冗余子问题的分治算法（幂乘）
double 冗余幂乘(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n % 2 == 0) {
        double temp = 冗余幂乘(x, n / 2);
        return temp * temp;
    } else {
        return x * 冗余幂乘(x, n - 1);
    }
}

// 无冗余子问题的分治算法（幂乘）
double 无冗余幂乘(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else {
        double temp = 无冗余幂乘(x, n / 2);
        if (n % 2 == 0) {
            return temp * temp;
        } else {
            return x * temp * temp;
        }
    }
}

// 分治算法找到数集中的最大值
int 寻找最大值(int A[], int start, int end) {
    if (start == end) {
        return A[start];
    } else {
        int mid = (start + end) / 2;
        int max_left = 寻找最大值(A, start, mid);
        int max_right = 寻找最大值(A, mid + 1, end);
        return (max_left > max_right) ? max_left : max_right;
    }
}

int main() {
    // 幂乘
    double 底数;
    int 指数;
    printf("请输入底数和指数以进行幂乘计算:\n");
    scanf("%lf%d", &底数, &指数);
    printf("有冗余子问题的幂乘: %.2f ^ %d = %.2f\n", 底数, 指数, 冗余幂乘(底数, 指数));
    printf("无冗余子问题的幂乘: %.2f ^ %d = %.2f\n", 底数, 指数, 无冗余幂乘(底数, 指数));

    // 寻找数集中的最大值
    int n;
    printf("\n请输入数组元素的数量: ");
    scanf("%d", &n);

    int 数组[n];
    printf("请输入数组的元素:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &数组[i]);
    }

    int 最大值 = 寻找最大值(数组, 0, n - 1);
    printf("数组中的最大值: %d\n", 最大值);
    getchar(); // 等待用户输入，防止窗口关闭
    return 0;
}
