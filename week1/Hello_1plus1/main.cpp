#include <stdio.h>
#include <stdint.h>
int main()
{
    //for assembly debug
    int i;
    printf("hello\n");
    i=1;
    i=i+1;
    printf("%d\n",i);
    scanf_s("%d",&i);
    i=i+1;
    printf("%d\n", i);


    static uint32_t j,k;
    static uint64_t j1,k1,l1;
    scanf_s("%d %d",&j,&k);
    j1=j; k1=k;
    l1=j1+k1;
    printf("%lld\n", l1);

    return 0;
}
