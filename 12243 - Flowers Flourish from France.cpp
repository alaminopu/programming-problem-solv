#include <cstdio>
#include <cstring>
#include <cctype>

int main(){
    char tauto[10005];
    while(gets(tauto)!=NULL){

        //printf("%s\n",tauto);
        if(strcmp(tauto,"*")==0) break;

        int i, len, flag=1;

        len = strlen(tauto);
        char k,x;
        k = tolower(tauto[0]);
        //putchar(k);
        for(i=1; i<len-1; i++){
            if(tauto[i]== ' '){
                x = tolower(tauto[i+1]);
                //putchar(x);
                if(x!=k){
                    flag=0;
                }
            }
        }

        if(flag){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}
