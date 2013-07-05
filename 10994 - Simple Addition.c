#include <stdio.h>
#include <math.h>

long long sum(long long n)
{
     long long m, s1 = 0, s2 = 0;

     while(n)
     {
         m = n % 10;
         n = n / 10;
         s1 += ((m * (m+1)) / 2);
         s2 += n * 45;
     }
     return s1+s2;
}

int main()
{
    int a, b;
    long long x,y;

    while(scanf("%d %d",&a, &b) != EOF)
    {
        if(a <0 && b<0)
            break;

        x =sum(b);
        if(a==0||a==1){
            y = 0;
        }
        else{
            y = sum(a-1);
        }
        x = x-y;
        printf("%lld\n",x);
    }
    return 0;
}
