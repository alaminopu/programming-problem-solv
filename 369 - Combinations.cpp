#include <cstdio>

int main(){
    long long N, M;
    long long n, r, ncr[110][110];
    for(n=0; n<110; n++){
        for(r=0; r<=n; r++){
            if(r==0 || n==r){
                ncr[n][r]=1;
            }else{
                ncr[n][r]=ncr[n-1][r-1]+ ncr[n-1][r];
            }
        }
    }
    while(scanf("%lld %lld",&N, &M)!=EOF){
        if(N==0 && M==0) break;
        printf("%lld things taken %lld at a time is %lld exactly.\n",N, M,ncr[N][M]);

    }
    return 0;
}
