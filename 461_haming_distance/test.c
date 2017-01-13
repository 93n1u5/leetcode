#include <stdio.h>

int
cnt_bit_one(int i)
{
    int count=0;
    while(i!=0)
    {
        i&1==1?count++:1;
        i=i>>1;
    }

    return count;
}

int hammingDistance(int x, int y) {
    int z=x^y;
    return cnt_bit_one(z);
}

int
main(int argc, char* argv[])
{
    int x1=0,y1=7;
    printf("(%d,%d)=%d\n",x1,y1,hammingDistance(x1,y1));

    int x2=2,y2=8;
    printf("(%d,%d)=%d\n",x2,y2,hammingDistance(x2,y2));

    int x3=3,y3=6;
    printf("(%d,%d)=%d\n",x3,y3,hammingDistance(x3,y3));

    return 1;
}
