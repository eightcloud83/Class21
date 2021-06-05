#include <stdio.h>
#include <Windows.h>
void scrGoto(int x, int y)
{
    printf("%c[%d;%dH", 27,y,x);
}
void scrClr()
{
    printf("%c[2J",27);
}

static int print(int x, int y)
{
    int i,j, nspace,nstart;
    scrGoto(x,y);
    for (i=0; i<5; i++)
    {
        nspace=4-i;
        for(j=0; j<nspace; j++)
            printf(" ");
        nstart=2*i+1;
        for(j=0; j<nstart; j++)
            printf("*");
        y++;
        scrGoto(x,y);
    }
    return 0;
}


void Hello1()
{
    Sleep(1000);
    scrGoto(1,1);
    scrClr();
    print(30,10);
}
