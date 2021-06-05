
#include <stdio.h>
#include <stdint.h>

void outputch(int i,char c0)
{
    uint8_t c1=(uint8_t)c0;
    char s[3];
    if (c1<' ') {s[0]='\\'; s[1]='<'; s[2]=0;}
    else if (c1>127) {s[0]='\\'; s[1]='>'; s[2]=0;}
    else {s[0]=c0, s[1]=0;}
    fprintf(stdout, "%2d:%02x|%3d|%s|\n", i, c1, c1, s);
}
void ascii()
{
    int i;
    char abcd[]={"09azAZ\\\n"};
    char *pabcd;
    pabcd=abcd;
    int len1=sizeof(abcd);
    int len2=sizeof(pabcd);
    fprintf(stdout, "address=%p, sizeof(abcd)=%d, sizeof(pointer)=%d \n", abcd,len1,len2);

    fprintf(stdout,"%s\n",abcd);
    for(i=0; i<len1; i++)
        outputch(i,abcd[i]);
    len1--;

    fprintf(stdout,"\n**plus1\n");
    for(i=0; i<len1;i++)
        abcd[i]++;          //abcd[i]=abcd[i]+1;
    fprintf(stdout,"%s\n",abcd);
    for(i=0;i<=len1;i++)
        outputch(i, abcd[i]);

    fprintf(stdout,"\n**minus1\n");
    for(i=0; i<len1;i++)
        abcd[i]-=2;         //abcd[i]=abcd[i]-2;
    fprintf(stdout,"%s\n",abcd);
    for(i=0;i<=len1;i++)
        outputch(i, abcd[i]);
}

void utf8();
void big5();

int main()
{
    ascii();
    utf8();
    big5();
    return 0;
}
