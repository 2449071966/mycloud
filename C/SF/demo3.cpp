#include <stdio.h>

// 分治算法计算向量内积
int vector_inner_product(int A[], int B[], int start, int end) {
    if (start == end) {
        return A[start] * B[start];
    } else {
        int mid = (start + end) / 2;
        int left_product = vector_inner_product(A, B, start, mid);
        int right_product = vector_inner_product(A, B, mid + 1, end);
        return left_product + right_product;
    }
}

int main() {
    int n;

    // 输入向量的长度
    printf("请输入向量的长度 n：");
    scanf("%d", &n);

    if (n <= 0) {
        printf("向量长度必须为正整数。\n");
        return 1; // 返回错误代码
    }

    // 输入向量 A
    int A[n];
    printf("请输入向量 A 的 %d 个元素：\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }

    // 输入向量 B
    int B[n];
    printf("请输入向量 B 的 %d 个元素：\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &B[i]);
    }

    // 计算向量内积并输出结果
    printf("进行到此步骤\n");  // 调试信息
    int result = vector_inner_product(A, B, 0, n - 1);
    printf("向量内积 A × B 的结果为：%d\n", result);

    return 0;
}
