#include <stdio.h>

int main()
{
    long long hasm, oth;

    while(scanf("%lld %lld",&hasm,&oth)!= EOF)
    {
        if(oth>=hasm){
            printf("%lld\n",(oth-hasm));
        }
        else {
            printf("%lld\n",(hasm-oth));
        }
    }
    return 0;
}
