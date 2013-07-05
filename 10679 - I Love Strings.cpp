#include <cstdio>
#include <cstring>

int main(){
    char str[100500];
    int K,Q,res;
    char T[1500];

    scanf("%d",&K);
    while(K--){
        scanf("%s",str);
        int mlen = strlen(str);
        scanf("%d",&Q);
        while(Q--){
            scanf("%s",T);
            res=1;
            int klen = strlen(T);
            if(klen>mlen) res = 0;

            int i=0;
            while(i<klen){
                if(str[i]!=T[i]){
                    res=0;
                    break;
                }
                i++;
            }

            if(res){
                printf("y\n");
            }else{
                printf("n\n");
            }
        }
    }
    return 0;
}
