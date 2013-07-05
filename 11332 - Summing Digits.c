#include <stdio.h>
#include <string.h>


int main(){
    char num[12];
    int sum = 0;
    int i,len,x,y;

    while((scanf("%s",&num))!=EOF){
        sum=0;
        if(num[0]-48==0){
            break;
        }
        len = strlen(num);
        for(i=0; i<len; i++){
            sum+=num[i]-48;
        }
        x = sum/10+sum%10;
        y = x/10+x%10;
        if(x<10){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",y);
        }
    }
    return 0;
}
