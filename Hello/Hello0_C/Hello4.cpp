#include <stdio.h>
#include <Windows.h>
#include "Tower.h"
void scrGoto(int x, int y);
void scrClr();
void printA(int x, int y, int* A, int n, int m);

struct Tower;
void Tower_Init(struct Tower* t, int i, int m);
int  Tower_Add(struct Tower* t, int v);
int  Tower_Show(struct Tower* t);

extern struct Tower  towerS[];
int  Tower_Rm(struct Tower *t)
{
    int p=t->n;
    if (p==0)
        return -1;
    p--;
    int r=t->A[p];
    t->n=p;
    return r;
}
void TowerShow()
{
    int i;
    scrGoto(1, 1);
    scrClr();
    for (i=0; i <3; i++)
        Tower_Show(towerS+i);
}

void TowerMove(struct Tower* src, struct Tower* tgt,struct Tower* tmp, int n)
{
    if (n==1)
    {
        int v=Tower_Rm(src);
        Tower_Add(tgt,v);
        TowerShow();
        Sleep(250);
        return;
    }
    TowerMove(src,tmp,tgt,n-1);
    TowerMove(src,tgt,tmp,1);
    TowerMove(tmp,tgt,src,n-1);
}

void Hello4()
{
    int i;
    for (i=0; i <3; i++)
        Tower_Init(towerS+i, i, 8);
    for (i=8; i>=1; i--)
        Tower_Add(towerS, i);
    TowerShow();
    TowerMove(towerS+0,towerS+2,towerS+1,8);
}
