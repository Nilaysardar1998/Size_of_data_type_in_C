#include <stdio.h>

int main() {
    //modifiers is used before data-type here.
    char ch1;
    printf("Size of [char] Data type is [%d] bits.\n", sizeof(ch1));
    signed char ch2;
    printf("Size of [signed char] Data type is [%d] bits.\n", sizeof(ch2));
    unsigned char ch3;
    printf("Size of [unsigned char] Data type is [%d] bits.\n", sizeof(ch3));
    int a;
    printf("Size of [int] Data type is [%d] bits.\n", sizeof(a));
    signed int b = 2;
    printf("Size of [signed int] Data type is [%d] bits.\n", sizeof(b));
    unsigned  int c = 3;
    printf("Size of [unsigned int] Data type is [%d] bits.\n", sizeof(c));
    short int d;
    printf("Size of [short int] Data type is [%d] bits.\n", sizeof(d));
    long e;
    printf("Size of [long int] Data type is [%d] bits.\n", sizeof(e));
    long long f;
    printf("Size of [long long] int Data type is [%d] bits.\n", sizeof(f));
    unsigned long g;
    printf("Size of [unsigned long int] Data type is [%d] bits.\n", sizeof(e));
    unsigned long long h;
    printf("Size of [unsigned long long] int Data type is [%d] bits.\n", sizeof(f));
    float fl;
    printf("Size of [float] Data type is [%d] bits.\n", sizeof(fl));
    double dou;
    printf("Size of [double] int Data type is [%d] bits.\n", sizeof(dou));
    long double ldou;
    printf("Size of [long double] int Data type is [%d] bits.\n", sizeof(ldou));
    return 0;
}
