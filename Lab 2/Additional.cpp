#include <cstdio>

void size_check(int& n) {
    while (n < 1 || n > 100) {
        printf("���������� ����� � �������� ������� ������ ���� �� 1 �� 100. \n");
        scanf_s("%d", &n);
    }
    return;
}