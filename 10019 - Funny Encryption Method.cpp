#include <cstdio>

int binary(int N){
    int count=0;

    while(N){
            if(N%2!=0){
                count++;
            }
            N=N/2;
    }
    return count;
}

int main(){
    int cas, N, M,k;
    int bcount, hcount;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d",&N);
        M = N;
        bcount=hcount=0;
        bcount = binary(N);
        while(M){
            k = M%10;
            hcount = hcount+binary(k);
            M = M/10;
        }

        printf("%d %d\n",bcount,hcount);


    }
    return 0;
}
