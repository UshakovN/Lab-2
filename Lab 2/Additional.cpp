#include <cstdio>

void size_check(int& n) {
    while (n < 1 || n > 100) {
        printf("Количество строк и столбцов матрицы должно быть от 1 до 100. \n");
        scanf_s("%d", &n);
    }
    return;
}