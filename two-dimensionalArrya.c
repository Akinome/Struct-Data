#include <stdio.h>
#include <stdbool.h>

bool findNumberIn2Darray(int** matrix, int matrixSize, int* matrixColSize, int target);

int main() {
    // 创建一个二维数组
    int row1[] = {1, 4, 7, 11, 15};
    int row2[] = {2, 5, 8, 12, 19};
    int row3[] = {3, 6, 9, 16, 22};
    int row4[] = {10, 13, 14, 17, 24};
    int row5[] = {18, 21, 23, 26, 30};

    int* matrix[] = {row1, row2, row3, row4, row5};
    int matrixColSize[] = {5, 5, 5, 5, 5};
    int matrixSize = 5;

    // 测试目标值
    int target1 = 5;
    int target2 = 20;

    // 调用函数并打印结果
    if (findNumberIn2Darray(matrix, matrixSize, matrixColSize, target1)) {
        printf("找到了目标值 %d\n", target1);
    } else {
        printf("未找到目标值 %d\n", target1);
    }

    if (findNumberIn2Darray(matrix, matrixSize, matrixColSize, target2)) {
        printf("找到了目标值 %d\n", target2);
    } else {
        printf("未找到目标值 %d\n", target2);
    }

    return 0;
}

bool findNumberIn2Darray(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if(matrixSize == 0 || *matrixColSize == 0) return false;
    int x = *matrixColSize - 1, y = 0;
    while (x >= 0 && y < matrixSize){
        if (*(*(matrix+y)+x) > target) x--;
        else if ((*(*matrix+x)+y) < target) y++;
        else return true;
    }
    return false;
}
