//https://www.footmark.info/introduction-to-computer/digital-system-conversion/
#include <stdio.h>
#include <stdint.h>

void ShowBinary0(int v,int bits)
{
    char fmtbuf[100];
    bits--;
    int nX=bits/4+1;
    int nD=bits/3+1;
    snprintf(fmtbuf,100,"\t0x%%0%dx\t%%%du\n",nX,nD);
    uint64_t m=((uint64_t)1<<bits);
    while(m>0) {
        printf("%d",((v&m)!=0));
        m>>=1;
    }
    printf(fmtbuf,v,v);
    //printf("\t0x%02x\t%3d\n",v,v);
}

void ShowUInt32()
{
    uint32_t v_min;
    uint32_t v_max;
    uint32_t v_nxt;
    uint32_t v_prv;
    v_min=0;
    v_max=(1LL<<32)-1;
    v_nxt=v_max+1;
    v_prv = v_min - 1;
    printf("\nuint32_t (unsigned int)\n");
    printf("程  =");  ShowBinary0(v_min, 32);
    printf("程  =");  ShowBinary0(v_max, 32);
    printf("程-1=");  ShowBinary0(v_prv, 32);
    printf("程+1=");  ShowBinary0(v_nxt, 32);
}

void ShowUInt16()
{
    uint16_t v_min;
    uint16_t v_max;
    uint16_t v_nxt;
    uint16_t v_prv;
    v_min=0;
    v_max=(1<<16)-1;
    v_nxt=v_max+1;
    v_prv=v_min-1;
    printf("\nuint16_t (unsigned short)\n");
    printf("程  =");  ShowBinary0(v_min, 16);
    printf("程  =");  ShowBinary0(v_max, 16);
    printf("程-1=");  ShowBinary0(v_prv, 16);
    printf("程+1=");  ShowBinary0(v_nxt, 16);
}

void ShowUInt8()
{
    uint8_t v_min;
    uint8_t v_max;
    uint8_t v_nxt;
    uint8_t v_prv;
    v_min=0;
    v_max=(1<<8)-1;
    v_nxt=v_max+1;
    v_nxt = v_max + 1;
    v_prv = v_min - 1;
    printf("\nuint8_t (unsigned char)\n");
    printf("程  =");  ShowBinary0(v_min, 8);
    printf("程  =");  ShowBinary0(v_max, 8);
    printf("程-1=");  ShowBinary0(v_prv, 8);
    printf("程+1=");  ShowBinary0(v_nxt, 8);
}

void ShowBinary()
{

    printf("\nbinary\t\thex\tdecimal\n");
    ShowBinary0(1, 8);
    ShowBinary0(2, 8);
    ShowBinary0(3, 8);
    ShowBinary0(7, 8);
    ShowBinary0(8, 8);
    ShowBinary0(9, 8);
    ShowBinary0(10, 8);
    ShowBinary0(11, 8);
    ShowBinary0(15, 8);
    ShowBinary0(16, 8);
    ShowBinary0(20, 8);
    ShowBinary0(100, 8);
    ShowBinary0(200, 8);
    ShowBinary0(255, 8);
}

int main()
{
    ShowBinary();
    ShowUInt8();
    ShowUInt16();
    ShowUInt32();
    return 0;
}
