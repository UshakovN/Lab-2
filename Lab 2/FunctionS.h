#pragma once
#include <cstdio>

float a[100][100], b[100][100];
bool ch_a[100], ch_b[100];

void input(FILE* f, int n, int m, float x[][100]);
void output(FILE* f, int n, int m, const float x[][100]);
float max_line(int m, const float x[]);
float max_matrix_ln(int m, int n, const float x[][100]);
void positive_line(int m, const float x[], bool& pol);
void positive_matrix_ln(int m, int n, const float x[][100], bool check[]);
void out_check(FILE* f, int n, bool check[]);
float max_matrix_whole(int n, int m, const float x[][100]);
void positive_matrix_whole(int n, int m, const float x[][100], bool ch[]);