#ifndef COMMON
#define COMMON

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
#include <lapacke.h>


#define max(x, y) (x>y ? x : y)
#define min(x, y) (x<y ? x : y)


void write_to_file(double* mat, int n, int d);
void qrDecomp(double* G, lapack_int d, lapack_int ell);
void dot_product(double* C, int m, int n);
void column_norm (double* C, int m, int n);
double getSpectralNorm(double* mat, int ell, int d);
void subtract(double* mat1, double* mat2, int n, int d);
double* getDenseCovariance(double* mat, int ell, int d);
void normalizeVector(double* vec, int len);

void print_two_dim(char* desc, double* mat, int m, int n);
void print_one_dim_double(char* desc, double* mat, int length);
void print_one_dim_int(char* desc, int* mat, int length);
void printline(void);

#endif

