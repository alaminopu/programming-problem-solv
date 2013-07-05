#include <cstdio>
#include <cmath>


int is_prime(int n){
    int i, sq, flag=1;
    sq = sqrt(n);
    for(i=2; i<=sq; i++){
        if(n%i==0) flag=0;
    }

    return flag;
}

int main(){
    int N,i,a,b;
    while(scanf("%d",&N) && N){
        for(i=N-1; i>=2; i--){
            a = N-i;
            b=i;
            if(is_prime(a) && is_prime(b)){
                if(a<2) continue;
                break;
            }
        }

        printf("%d = %d + %d\n",N,a,b);
    }
    return 0;
}
