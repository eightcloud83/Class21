#include <stdio.h>
#include <Windows.h>
void scrGoto(int x, int y);
void scrClr();

static void print(int x, int y,int i,int m)
{
    int j,nspace,nstart;
    scrGoto(x,y);
    nspace=m-i;
    for(j=0; j<nspace; j++)
        printf(" ");
    nstart=2*i-1;
    for(j=0; j<nstart; j++)
        printf("*");
}

void printA(int x, int y, int* A, int n, int m)
{
    int i, j, nspace, nstart;
    int nl=m-n;
    y+=nl;
    n--;
    for (;n>=0;n--) {
        print(x,y,A[n],m);
        y++;
    }
    return;
}


void Hello2()
{
    Sleep(1000);
    int A[]={5,3,1};
    scrGoto(1,1);
    scrClr();
    printA(30,10,A,3,5);
}
