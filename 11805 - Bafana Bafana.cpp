#include <cstdio>

int main(){
    int cas, casno=0;
    scanf("%d",&cas);
    while(cas--){
        int N, K,i, P;
        scanf("%d %d %d",&N,&K,&P);
        for (i=0;i<P;i++){
            if (K>=N)
            {
            K=0;
            }
            K++;
        }
        printf("Case %d: %d\n",++casno,K);
    }
    return 0;
}
