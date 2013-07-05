/* word counting */
#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    int i;
    char line[10000];

    while(gets(line)!= NULL)
    {
        int l =strlen(line);
        int flag =0;
        int count=0;
        for(i=0; i<l; i++)
        {
            if(isalpha(line[i])&&!flag)
            {
                count++;
                flag=1;
            }
            else if(!isalpha(line[i]))
            {
                flag=0;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
