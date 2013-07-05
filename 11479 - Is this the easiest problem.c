#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){
    int cases, caseno=0;
    long long a[3];
    int n;

    scanf("%d",&cases);
    while(cases--){
        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);

        qsort (a, 3, sizeof(long long), compare);
        /*for (n=0; n<3; n++)
            printf ("%d ",a[n]);*/

        if(a[0]+a[1]<=a[2]){
            printf("Case %d: Invalid\n",++caseno);
        }
        else if((a[0]==a[1])&&(a[1]==a[2])){
            printf("Case %d: Equilateral\n",++caseno);
        }
        else if((a[0]==a[1])||(a[1]==a[2])){
            printf("Case %d: Isosceles\n",++caseno);
        }
        else{
            printf("Case %d: Scalene\n",++caseno);
        }
    }
    return 0;
}
