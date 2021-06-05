
#include <stdio.h>
#include <stdint.h>
/*
#pragma execution_character_set("utf-8")
*/
void outputch(int i,char c0);
void big5()
{
    int i;
    char abcd[]={"功一二三四"};
    char *pabcd;
    pabcd=abcd;
    int len1=sizeof(abcd);
    int len2=sizeof(pabcd);
    fprintf(stdout, "address=%p, sizeof(abcd)=%d, sizeof(pointer)=%d \n", abcd,len1,len2);

    fprintf(stdout,"%s\n",abcd);
    for(i=0; i<len1; i++)
        outputch(i, abcd[i]);
}

