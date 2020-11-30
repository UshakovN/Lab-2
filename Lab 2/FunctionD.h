#pragma once
#include <cstdio>

float** a, ** b;
bool* ch_a, * ch_b;

void MemoryNew(float **&x, int n, int m);
void MemoryClear(float **&x, int n);
void input(FILE* f, int n, int m, float **&x);
void output(FILE* f, int n, int m, float** x);
float max_line(int m, float* x);
float max_matrix_ln(int m, int n, float** x);
void positive_line(int m, float* x, bool& pol);
void positive_matrix_ln(int m, int n, float** x, bool *&check);
void out_check(FILE* f, int n, bool *check);
float max_matrix_whole(int n, int m, float** x);
void positive_matrix_whole(int n, int m, float** x, bool *&ch);