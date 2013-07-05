#include <stdio.h>

long square(x){return x*x;}

long bigmod(long b,long p,long m)
{
    if (p == 0)
        return 1;
    else if (p%2 == 0)
        return square(bigmod(b,p/2,m)) % m;
    else
        return ((b % m) * bigmod(b,p-1,m)) % m;
}

int main()
{
    long int b,p,m;
    while(scanf("%ld %ld %ld",&b,&p,&m)==3){
        printf("%ld\n",bigmod(b,p,m));
    }
    return 0;
}
