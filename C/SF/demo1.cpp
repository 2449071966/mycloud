#include <stdio.h>

// 计算阶乘
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// 计算斐波那契数
unsigned long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        unsigned long long a = 0, b = 1, temp;
        for (int i = 2; i <= n; ++i) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}

int main() {
    // 计算并显示阶乘
    printf("Factorials:\n");
    printf("3! = %llu\n", factorial(3));
    printf("5! = %llu\n", factorial(5));
    printf("7! = %llu\n", factorial(7));
    printf("9! = %llu\n", factorial(9));

    // 计算并显示阶乘(n∈{10,11,…,19})
    printf("\nFactorials for n∈{10,11,…,19}:\n");
    for (int n = 10; n <= 19; ++n) {
        printf("%d! = %llu\n", n, factorial(n));
    }

    // 计算并显示斐波那契数
    printf("\nFibonacci Numbers:\n");
    printf("F3 = %llu\n", fibonacci(3));
    printf("F5 = %llu\n", fibonacci(5));
    printf("F7 = %llu\n", fibonacci(7));
    printf("F9 = %llu\n", fibonacci(9));

    // 计算并显示斐波那契数(n∈{10,11,…,19})
    printf("\nFibonacci Numbers for n∈{10,11,…,19}:\n");
    for (int n = 10; n <= 19; ++n) {
        printf("F%d = %llu\n", n, fibonacci(n));
    }

    getchar(); // 等待用户输入，防止窗口关闭
    return 0;
}
