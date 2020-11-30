//Даны две матрицы разного размера. 
//Для той из матриц, в которой больше максимальный элемент, 
//Проверить наличие положительных элементов в каждой строке.

#include <cstdio>
#include <locale.h>
#include "Additional.h"
#pragma warning (disable:4996)

//#include "FunctionS.h"
#include "FunctionD.h"

int main() {

    setlocale(LC_ALL, "Rus");
    int select, n_a, m_a, n_b, m_b;
    float max_a, max_b;
    bool flag = true;
    FILE* matrix_a;
    FILE* matrix_b;
    FILE* log;

    while (flag) {
        printf("1: Очистить log-файл. \n");
        printf("2: Решить задачу (По строкам). \n");
        printf("3: Решить задачу (Вся матрица). \n");
        printf("4: Завершение работы программы. \n");
        printf("Выбор: ");
        scanf_s("%d", &select);
        switch (select) {

        case (1):
            fopen_s(&log, "log.txt", "w");
            fclose(log);
            fopen_s(&log, "log.txt", "a");
            fprintf(log, "log-файл очищен. \n");
            fclose(log);
            break;

        case (2):
            fopen_s(&log, "log.txt", "a");
            fopen_s(&matrix_a, "a.txt", "r");
            fopen_s(&matrix_b, "b.txt", "r");
            printf("Введите количество строк матрицы А: ");
            scanf_s("%d", &n_a); size_check(n_a);
            printf("Введите количество столбцов матрицы А: ");
            scanf_s("%d", &m_a); size_check(m_a);

            printf("Введите количество строк матрицы B: ");
            scanf_s("%d", &n_b); size_check(n_b);
            printf("Введите количество столбцов матрицы B: ");
            scanf_s("%d", &m_b); size_check(m_b);

            a = new float* [n_a]; MemoryNew(a, n_a, m_a); b = new float* [n_b]; MemoryNew(b, n_b, m_b);
            ch_a = new bool[n_a]; ch_b = new bool[n_b];

            input(matrix_a, n_a, m_a, a);
            fprintf(log, "Матрица А. Строк: %d. Столбцов: %d. Элементы: \n", n_a, m_a);
            output(log, n_a, m_a, a);
            input(matrix_b, n_b, m_b, b);
            fprintf(log, "Матрица B. Строк: %d. Столбцов: %d. Элементы: \n", n_b, m_b);
            output(log, n_b, m_b, b);
            fprintf(log, "Поиск максимальных элементов в матрицах А и B. \n");
            max_a = max_matrix_ln(m_a, n_a, a);
            max_b = max_matrix_ln(m_b, n_b, b);
            fprintf(log, "Максимальный элемент в матрице А: %.2f \n", max_a);
            fprintf(log, "Максимальный элемент в матрице B: %.2f \n", max_b);
            if (max_a > max_b) {
                positive_matrix_whole(m_a, n_a, a, ch_a);
                fprintf(log, "В матрице A максимальный элемент больше. \n");
                fprintf(log, "Проверка наличия положительных элементов в каждой строке матрицы A: \n");
                out_check(log, n_a, ch_a);
            }
            else if (max_a < max_b) {
                positive_matrix_whole(m_b, n_b, b, ch_b);
                fprintf(log, "В матрице B максимальный элемент больше. \n");
                fprintf(log, "Проверка наличия положительных элементов в каждой строке матрицы B: \n");
                out_check(log, n_b, ch_b);
            }
            else fprintf(log, "В матрицах максимальный элемент совпадает. \n");
            fprintf(log, "\n");
            fclose(matrix_a); fclose(matrix_b); fclose(log);

            MemoryClear(a, n_a); delete[] a; MemoryClear(b, n_b); delete[] b;
            delete[] ch_a; delete[] ch_b;
            break;  

        case (3):
            fopen_s(&log, "log.txt", "a");
            fopen_s(&matrix_a, "a.txt", "r");
            fopen_s(&matrix_b, "b.txt", "r");
            printf("Введите количество строк матрицы А: ");
            scanf_s("%d", &n_a); size_check(n_a);
            printf("Введите количество столбцов матрицы А: ");
            scanf_s("%d", &m_a); size_check(m_a);

            printf("Введите количество строк матрицы B: ");
            scanf_s("%d", &n_b); size_check(n_b);
            printf("Введите количество столбцов матрицы B: ");
            scanf_s("%d", &m_b); size_check(m_b);

            a = new float* [n_a]; MemoryNew(a, n_a, m_a); b = new float* [n_b]; MemoryNew(b, n_b, m_b);
            ch_a = new bool[n_a]; ch_b = new bool[n_b];

            input(matrix_a, n_a, m_a, a);
            fprintf(log, "Матрица А. Строк: %d. Столбцов: %d. Элементы: \n", n_a, m_a);
            output(log, n_a, m_a, a);
            input(matrix_b, n_b, m_b, b);
            fprintf(log, "Матрица B. Строк: %d. Столбцов: %d. Элементы: \n", n_b, m_b);
            output(log, n_b, m_b, b);
            fprintf(log, "Поиск максимальных элементов в матрицах А и B. \n");
            max_a = max_matrix_whole(m_a, n_a, a);
            max_b = max_matrix_whole(m_b, n_b, b);
            fprintf(log, "Максимальный элемент в матрице А: %.2f \n", max_a);
            fprintf(log, "Максимальный элемент в матрице B: %.2f \n", max_b);
            if (max_a > max_b) {
                positive_matrix_whole(m_a, n_a, a, ch_a);
                fprintf(log, "В матрице A максимальный элемент больше. \n");
                fprintf(log, "Проверка наличия положительных элементов в каждой строке матрицы B: \n");
                out_check(log, n_a, ch_a);
            }
            else if (max_a < max_b) {
                positive_matrix_whole(m_b, n_b, b, ch_b);
                fprintf(log, "В матрице B максимальный элемент больше. \n");
                fprintf(log, "Проверка наличия положительных элементов в каждой строке матрицы B: \n");
                out_check(log, n_b, ch_b);
            }
            else fprintf(log, "В матрицах максимальный элемент совпадает. \n");
            fprintf(log, "\n");
            fclose(matrix_a); fclose(matrix_b); fclose(log);

            MemoryClear(a, n_a); delete[] a; MemoryClear(b, n_b); delete[] b;
            delete[] ch_a; delete[] ch_b;
            break;

        case (4):
            flag = false;
            fopen_s(&log, "log.txt", "a");
            fprintf(log, "Завершение работы программы. \n");
            fclose(log);
            break;

        default:
            printf("Введите корректное значение. \n");
            break;
        }
    }
    return 0;
}