#include <cstdio>
#include <cstring>

int main(){
    int cases, caseno=0,N,sum,T;
    char donate[]="donate";
    char report[]="report";
    char topic[20];
        scanf("%d",&T);
        sum=0;
        while(T--){
            scanf("%s",topic);
            if(strcmp(topic,donate)==0){
                scanf("%d",&N);
                sum+=N;
            }else if(strcmp(topic,report)==0){
                printf("%d\n",sum);
            }
        }
    return 0;
}
