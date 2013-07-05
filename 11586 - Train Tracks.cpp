#include<stdio.h>
int main()
{
    int i,k,l,n;
    char a[1000],c;
    scanf("%d",&n);
    c=getchar();
    k=0;
    l=0;
    while(n--)
    {
        gets(a);
        i=0;
        k=0;
        l=0;
        while(a[i]!='\0')
        {
            if(a[i]=='F')
            {
                l++;
            }
            else if(a[i]=='M')
            {
                k++;
            }
            i++;
        }
        if((k==l)&&(k>1)&&(l>1))
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;

}
