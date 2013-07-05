#include <cstdio>

int main(){
    int N,i,M,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&N) && N){
        // Finding out divisors
        i=1,sum=0;
        M= N/2;
        while(i<=M){
            if(N%i==0){
                sum = sum + i;
            }
            i++;
        }


        if(sum==N){
            printf("%5d  PERFECT\n",N);
        }else if(sum<N){
            printf("%5d  DEFICIENT\n",N);
        }else{
            printf("%5d  ABUNDANT\n",N);
        }

    }
    printf("END OF OUTPUT\n");
    return 0;
}
