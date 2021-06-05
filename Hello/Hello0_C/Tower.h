#include <stdio.h>
#include <Windows.h>
void scrGoto(int x, int y);
void scrClr();
void printA(int x, int y, int* A, int n, int m);

struct Tower {
    int id;
    int m;
    int n;
    int *A;
};
