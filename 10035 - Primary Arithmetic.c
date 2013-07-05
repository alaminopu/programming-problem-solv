#include <stdio.h>
#include <string.h>
#define MAX(a,b) a>b?a:b

void reverse(char *from, char *to )
{
    int len=strlen(from);
    int l;
    for(l=0; l<len; l++)
        to[l]=from[len-l-1];
    to[len]='\0';
}

int main()
{
    char num1[25],num2[25],F[25],S[25],Res[25];
    int f,s,extra=0,count=0,now,sum=0,max,fsum,ssum;

    while((scanf("%s %s",num1,num2)==2))
    {
        count=0;
        sum=0;
        fsum=ssum=max=0;
        extra=0;
        if(strcmp(num1,"0")==0 && strcmp(num2,"0")==0)
        {
            break;
        }
        reverse(num1,F);
        reverse(num2,S);
        f= strlen(F);
        s= strlen(S);
        max = MAX(f,s);

        for(now=0,extra=0; now<max; now++){
          fsum = (now<f)?(F[now]-'0'):0;
          ssum = (now<s)?(S[now]-'0'):0;
          sum=fsum+ ssum + extra;
          if(sum>=10){
            count++;
          }
          Res[now]=sum%10 +'0';
          extra= sum/10;
         }
        if(count){
            if(count>1)
                printf("%d carry operations.\n",count);
            else
                printf("%d carry operation.\n",count);
        }
        else{
            printf("No carry operation.\n");
        }

    }

    return 0;
}
