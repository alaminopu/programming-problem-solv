#include <stdio.h>

int main()
{
    char c;
    int d;

    while((c = getchar()) != EOF)
    {
        if(c=='\n'){
            printf("\n");
            continue;
        }
        d = c-7;
        printf("%c", d);
    }

    return 0;
}
