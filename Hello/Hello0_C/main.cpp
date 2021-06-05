
#include <stdio.h>
void Hello1();
void Hello2();
void Hello3();
void Hello4();
int main()
{
    int i,j, nspace,nstart;
    for (i=0; i<5; i++)
    {
        nspace=4-i;
        for(j=0; j<nspace; j++)
            printf(" ");
        nstart=2*i+1;
        for(j=0; j<nstart; j++)
            printf("*");
        printf("\n");
    }
    Hello4();
    return 0;
}
