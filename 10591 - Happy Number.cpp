#include <cstdio>

int dij;

int digitize(int n){
    int digit[20];
    int i=0;
    while(n){
        digit[i]=n%10;
        n = n/10;
        i++;
    }
    dij = i;
    int sum=0;

    for(int k=0; k<i; k++){
        sum = sum + digit[k]*digit[k];
    }

    //printf("dij: %d  sum: %d\n",dij,sum);

    return sum;
}

int main(){
    int cas,casno=0;
    int n,x,chk;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d",&n);
        dij = 9999999;
        x=digitize(n);
        if(n/10==0) {
            x=digitize(x);
        }
        while(dij!=1){
            x=digitize(x);
        }

        if(x==1){
            printf("Case #%d: %d is a Happy number.\n",++casno,n);
        }else{
            printf("Case #%d: %d is an Unhappy number.\n",++casno,n);
        }

    }
    return 0;
}
