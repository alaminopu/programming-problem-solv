#include <stdio.h>
#include <math.h>

int GCD(int n, int m)
{
    if(m == 0)
        return n;
    else
        return GCD(m,n % m);
}

int main()
{
    int G, N,i,j;
    while((scanf("%d",&N)!=EOF)&&(N!=0))
    {
        G=0;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)

            {
                G+=GCD(i,j);
            }
        printf("%d\n", G);
    }
    return 0;
}
