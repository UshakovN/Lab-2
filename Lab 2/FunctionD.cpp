#include <cstdio>
#include <locale.h>

// ������������ ������
void MemoryNew(float **&x, int n, int m) {
    for (int i = 0; i < n; i++) {
        x[i] = new float[m];
    }
    return;
}

void MemoryClear(float **&x, int n) {
    for (int i = 0; i < n; i++) {
        delete[] x[i];
    }
    return;
}

void input(FILE* f, int n, int m, float **&x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fscanf_s(f, "%f", &x[i][j]);
        }
        fscanf_s(f, "%*[^\n]");
    }
}

void output(FILE* f, int n, int m, float** x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(f, "%.2f ", x[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\n");
}

float max_line(int m, float* x) {
    float maxl = x[0];
    for (int j = 0; j < m; j++) {
        if (x[j] > maxl)
            maxl = x[j];
    }
    return maxl;
}

float max_matrix_ln(int m, int n, float** x) {
    float maxl = max_line(m, x[0]);
    for (int i = 1; i < n; i++) {
        if (maxl < max_line(m, x[i])) {
            maxl = max_line(m, x[i]);
        }
    }
    return maxl;
}

void positive_line(int m, float* x, bool& pol) {
    int j = 0;
    pol = false;
    while (j < m && !pol) {
        if (x[j] > 0)
            pol = true;
        j++;
    }
    return;
}

void positive_matrix_ln(int m, int n, float** x, bool *&check) {
    bool pol;
    for (int i = 0; i < n; i++) {
        positive_line(m, x[i], pol);
        if (pol) check[i] = true;
        else check[i] = false;
        pol = false;
    }
    return;
}

void out_check(FILE* f, int n, bool* check) {
    for (int i = 0; i < n; i++) {
        if (check[i])
            fprintf(f, "� ������: %d ���� ������������� ��������. \n", (i + 1));
        else if(!check[i])
            fprintf(f, "� ������: %d ��� ������������� ���������. \n", (i + 1));
    }
    return;
}

float max_matrix_whole(int n, int m, float** x) {
    float maxw = x[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x[i][j] > maxw)
                maxw = x[i][j];
        }
    }
    return maxw;
}

void positive_matrix_whole(int n, int m, float** x, bool* &ch) {
    int i = 0, j = 0;
    bool pol = false;
    while (i < n) {
        j = 0;
        while (j < m && !pol) {
            if (x[i][j] > 0) {
                pol = true;
                ch[i] = true;
            }
            else ch[i] = false;
            j++;
        }
        pol = false;
        i++;
    }
    return;
}