
/*

// Динамический массив
void MemoryNew(float** x, int n, int m) {
    for (int i = 0; i < n; i++) {
        x[i] = new float[m];
    }
    return;
}

void MemoryClear(float** x, int n) {
    for (int i = 0; i < n; i++) {
        delete[] x[i];
    }
    return;
}

void inputD(FILE* f, int n, int m, float** x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fscanf_s(f, "%f", &x[i][j]);
        }
        fscanf_s(f, "%*[^\n]");
    }
}

void outputD(FILE* f, int n, int m, const float** x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(f, "%.2f ", x[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\n");
}

float max_lineD(int m, const float* x) {
    float maxl = x[0];
    for (int j = 0; j < m; j++) {
        if (x[j] > maxl)
            maxl = x[j];
    }
    return maxl;
}

float max_matrix_lnD(int m, int n, const float** x) {
    float maxl = max_lineD(m, x[0]);
    for (int i = 1; i < n; i++) {
        if (maxl < max_lineD(m, x[i])) {
            maxl = max_lineD(m, x[i]);
        }
    }
    return maxl;
}

void positive_lineD(int m, const float* x, bool& pol) {
    int j = 0;
    pol = false;
    while (j < m && !pol) {
        if (x[j] > 0)
            pol = true;
        j++;
    }
    return;
}

void positive_matrix_lnD(int m, int n, const float** x, bool check[]) {
    bool pol;
    for (int i = 0; i < n; i++) {
        positive_lineD(m, x[i], pol);
        if (pol) check[i] = true;
        else check[i] = false;
    }
    return;
}

void out_checkD(FILE* f, int n, bool* check) {
    for (int i = 0; i < n; i++) {
        if (check[i])
            fprintf(f, "В строке: %d есть положительные элементы. \n", (i + 1));
        else
            fprintf(f, "В строке: %d нет положительных элементов. \n", (i + 1));
    }
    return;
}

float max_matrix_wholeD(int n, int m, const float** x) {
    float maxw = x[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x[i][j] > maxw)
                maxw = x[i][j];
        }
    }
    return maxw;
}

void positive_matrix_wholeD(int n, int m, const float** x, bool* ch) {
    int i = 0, j = 0;
    bool pol = false;
    while (i < n) {
        j = 0;
        while (j < m && !pol) {
            if (x[i][j] > 0) {
                pol = true;
                ch[i] = true;
            }
            else j++;
        }
        i++;
    }
    return;
}


// Статический массив
void input(FILE* f, int n, int m, float x[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fscanf_s(f, "%f", &x[i][j]);
        }
        fscanf_s(f, "%*[^\n]");
    }
}

void output(FILE* f, int n, int m, const float x[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fprintf(f, "%.2f ", x[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\n");
}

float max_line(int m, const float x[]) {
    float maxl = x[0];
    for (int j = 0; j < m; j++) {
        if (x[j] > maxl)
            maxl = x[j];
    }
    return maxl;
}

float max_matrix_ln(int m, int n, const float x[][100]) {
    float maxl = max_line(m, x[0]);
    for (int i = 1; i < n; i++) {
        if (maxl < max_line(m, x[i])) {
            maxl = max_line(m, x[i]);
        }
    }
    return maxl;
}

void positive_line(int m, const float x[], bool& pol) {
    int j = 0;
    pol = false;
    while (j < m && !pol) {
        if (x[j] > 0)
            pol = true;
        j++;
    }
    return;
}

void positive_matrix_ln(int m, int n, const float x[][100], bool check[]) {
    bool pol;
    for (int i = 0; i < n; i++) {
        positive_line(m, x[i], pol);
        if (pol) check[i] = true;
        else check[i] = false;
    }
    return;
}

void out_check(FILE* f, int n, bool check[]) {
    for (int i = 0; i < n; i++) {
        if (check[i])
            fprintf(f, "В строке: %d есть положительные элементы. \n", (i + 1));
        else
            fprintf(f, "В строке: %d нет положительных элементов. \n", (i + 1));
    }
    return;
}

float max_matrix_whole(int n, int m, const float x[][100]) {
    float maxw = x[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x[i][j] > maxw)
                maxw = x[i][j];
        }
    }
    return maxw;
}

void positive_matrix_whole(int n, int m, const float x[][100], bool ch[]) {
    int i = 0, j = 0;
    bool pol = false;
    while (i < n) {
        j = 0;
        while (j < m && !pol) {
            if (x[i][j] > 0) {
                pol = true;
                ch[i] = true;
            }
            else j++;
        }
        i++;
    }
    return;
}

void size_check(int& n) {
    while (n < 1 || n > 100) {
        printf("Количество строк и столбцов матрицы должно быть от 1 до 100. \n");
        scanf_s("%d", &n);
    }
    return;
}

*/
