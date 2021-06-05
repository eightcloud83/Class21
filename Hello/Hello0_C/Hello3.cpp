#include <stdio.h>
#include <Windows.h>
#include "Tower.h"
void scrGoto(int x, int y);
void scrClr();
void printA(int x, int y, int* A, int n, int m);


void Tower_Init(struct Tower *t,int i,int m)
{
    t->id=i;
    t->A=(int*)malloc(sizeof(int)*m);
    t->m=m;
    t->n=0;
}
int  Tower_Add(struct Tower *t,int v)
{
    int p=t->n;
    if (p>=t->m)
        return -1;
    t->A[p++]=v;
    t->n=p;
    return 0;
}
int  Tower_Show(struct Tower* t)
{
    int x=t->id*20+5;
    int y=5;
    printA(x,y,t->A,t->n,t->m);
    return 0;
}

struct Tower  towerS[3];

void Hello3()
{
    Sleep(1000);
    scrGoto(1,1);
    scrClr();
    int i;
    for(i=0; i<3; i++)
        Tower_Init(&towerS[i],i,8);
    for(i=8; i>=1; i--)
        Tower_Add(&towerS[0],i);
    for(i=5; i>=1; i-=2)
        Tower_Add(&towerS[2],i);
    for(i=0; i<3; i++)
        Tower_Show(&towerS[i]);
}
