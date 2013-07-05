#include <cstdio>

int main(){
    int cas,std[100005];
    scanf("%d",&cas);
    while(cas--){
        int N, i, j,get,k;
        scanf("%d",&N);
        for(i=0; i<N; i++){
            scanf("%d",&std[i]);
        }

        k = std[0];
        int max = std[0]-std[1];
        for(i=2; i<N; i++){
            if(max<(k-std[i])){
                max = k-std[i];
            }
            if(k<std[i]){
                k=std[i];
            }
        }

        printf("%d\n",max);
    }
    return 0;
}
