#include <cstdio>
#include <cstring>

int main(){
    char str[1050];
    int i,j,rem,len;
    while(scanf("%s",str)!=EOF){
        if(strcmp(str,"0")==0) break;
        rem=0;
        len = strlen(str);
        int sum=0;
        for(i=0; i<len; i++){
            sum= rem*10+(str[i]-48);
            rem= sum%17;
        }

        if(rem==0){
            printf("1\n");
        }else{
            printf("0\n");
        }

    }
    return 0;
}
