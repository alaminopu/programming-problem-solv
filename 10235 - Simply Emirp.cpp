#include <cstdio>
#include <cmath>

int is_prime(int N){
    int flag=1;
    int sq = sqrt(N);
    for(int i=2; i<=sq; i++){
        if(N%i==0){
            flag=0;
        }
    }
    return flag;
}

int reverse(int N){
    int sum=0;
    while(N){
        sum = (sum*10) + N%10;
        N = N/10;
    }

    return sum;
}

int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        if(is_prime(N)){
            if(is_prime(reverse(N))&& N!=reverse(N)){
                printf("%d is emirp.\n",N);
            }else{
                printf("%d is prime.\n",N);
            }

        }else{
            printf("%d is not prime.\n",N);
        }
    }
    return 0;
}
