#include <cstdio>

int main(){
    long long result,N,lastD;
    while(scanf("%lld",&N)!=EOF){
        lastD = ((N*(N+2))-1)/2;
        result = lastD + (lastD-2) + (lastD-4);
        printf("%lld\n",result);
    }
    return 0;
}
