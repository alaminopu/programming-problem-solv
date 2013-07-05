#include <cstdio>
#include <cstring>


int main(){
    char num[1050];
    int i;
    while(scanf("%s",num)!=EOF){
        if(strcmp(num,"0")==0) break;
        int len = strlen(num);
        int sum=0;
        for(i=0; i<len; i=i+2){
            sum = sum + (num[i]-48);
        }

        for(i=1; i<len; i=i+2){
            sum = sum - (num[i]-48);
        }

        if(sum%11==0){
            printf("%s is a multiple of 11.\n",num);
        }else{
            printf("%s is not a multiple of 11.\n",num);
        }
    }
    return 0;
}
