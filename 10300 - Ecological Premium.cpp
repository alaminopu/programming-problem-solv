#include <cstdio>

int main(){
    int n,f,i,j;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&f);
        int sum =0;
        int a, b,c;
        for(i=0; i<f; i++){
            scanf("%d %d %d",&a,&b,&c);
            sum = sum + (a*c);
        }
        printf("%d\n",sum);
    }
    return 0;
}
