#include <stdio.h>

int main(){
    int caseno=0, cases;
    int i,a, b;
    long long sum=0;

    scanf("%d",&cases);
    while(cases--){
        sum = 0;
        scanf("%d %d",&a,&b);
        if(a%2==0){
            a=a+1;
        }
        for(i=a; i<=b; i=i+2){
            sum =sum + i;

        }
        printf("Case %d: %lld\n",++caseno,sum);
    }
    return 0;
}
