#include <cstdio>

int main(){
    int N[5];
    int cas,x,i,count;
    while(scanf("%d",&cas) && cas){
        while(cas--){
            scanf("%d %d %d %d %d",&N[0],&N[1],&N[2],&N[3],&N[4]);
            count=0;
            for(i=0; i<5; i++){
                if(N[i]<=127){
                    count++;
                    x = i;
                }
            }

            if(count<2 && count!=0){
                printf("%c\n",x+65);
            }else{
                printf("*\n");
            }
        }
    }
    return 0;
}
