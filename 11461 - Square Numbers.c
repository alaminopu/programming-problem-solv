#include <stdio.h>
#include <math.h>


int main(){
  int a, b,x;

    while(scanf("%d %d",&a, &b) != EOF)
    {
        if(a == 0 && b == 0)
            break;
        b =(int) floor(sqrt(b));
        a = (int)floor(sqrt(a-1));

        x =b-a;

        printf("%d\n",x);
    }
    return 0;
}
