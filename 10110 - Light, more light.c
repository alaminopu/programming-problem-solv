#include <stdio.h>
#include <math.h>

int main(){
    unsigned int n,temp;
    while(scanf("%u",&n)==1){
        if(n==0){
            break;
        }
        temp = (int)ceil(sqrt(n));
        if(temp*temp == n){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
