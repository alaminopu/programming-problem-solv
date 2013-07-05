#include <cstdio>

long long pizza(long long n){
    if(n==0) return 1;
    return (n*(n + 1))/2 + 1;
}

int main(){
    long long N,res;
    while(scanf("%lld",&N) && N>=0){
        res = pizza(N);
        printf("%lld\n",res);
    }
    return 0;
}
