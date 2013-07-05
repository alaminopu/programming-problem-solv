#include <cstdio>

int main(){
    int cas;
    int A, F;
    int nline=0;
    //freopen("output.txt","w", stdout);

    scanf("%d",&cas);

    while(cas--){
        scanf("%d %d",&A,&F);
        if(nline>0) printf("\n");
        nline++;
        for(int i=1; i<=F; i++){
            for(int k=1; k<=A; k++){
                for(int j=1; j<=k; j++){
                    printf("%d",k);
                }
                printf("\n");
            }

            for(int k=A-1; k>=1; k--){
                for(int j=1; j<=k; j++){
                    printf("%d",k);
                }
                printf("\n");
            }
            if (i==F) continue;
            printf("\n");
        }

    }
    return 0;
}
