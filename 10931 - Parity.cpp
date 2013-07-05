#include <cstdio>
#include <cstring>

int rem[1000],i;

int binary(int n){
    int count =0;
    i =0;
    while(n!=0){
        rem[i]=n%2;
        if(rem[i]==1) count++;
        n=n/2;
        i++;
    }
    return count;
}

int main(){
    int N;
    while(scanf("%d",&N)==1 && N!=0){
        memset(rem,-1,sizeof(rem));
        printf("The parity of ");
        int count = binary(N);
        for(int k=i-1; k>=0; k--){
            printf("%d",rem[k]);
        }
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
