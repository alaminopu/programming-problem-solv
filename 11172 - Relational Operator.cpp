#include <cstdio>

int main(){
    long long N,M;
    int cases;
    scanf("%d",&cases);
    while(cases--){
        scanf("%lld %lld",&N,&M);
        if(N>M){
            printf(">\n");
        }else if(M>N){
            printf("<\n");
        }else if(N==M){
            printf("=\n");
        }
    }
    return 0;
}
