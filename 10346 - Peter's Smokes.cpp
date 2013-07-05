#include <cstdio>

int main(){
    long long N,K;
    while(scanf("%lld %lld",&N,&K)!=EOF){
        long long numOfcg=N;

        while(N>=K){
            numOfcg += N/K;
            N = N/K+N%K;
        }

        printf("%lld\n",numOfcg);
    }
    return 0;
}
