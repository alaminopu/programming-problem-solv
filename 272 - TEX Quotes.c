#include <stdio.h>

int main()
{
    char c;
    int d=0;

    while((c = getchar()) != EOF)
    {
        if(c=='"'){
            if(d==0){
                printf("``");
                d=1;
            }
            else{
                printf("''");
                d=0;
            }
            continue;
        }
        printf("%c", c);
    }

    return 0;
}
