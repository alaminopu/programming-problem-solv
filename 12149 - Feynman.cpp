#include <cstdio>

int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        if(N==0) break;
        int sum=0;
        for(int i=1; i<=N; i++){
            sum = sum + (i*i);
        }
        printf("%d\n",sum);
    }
    return 0;
}
