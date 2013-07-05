#include <cstdio>

int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        if(N==0) break;

        int rem,numOfcola=0;

        while(N>2){
            numOfcola += N/3;
            N = N/3+N%3;
        }

        if(N==2){
            numOfcola++;
        }

        printf("%d\n",numOfcola);
    }
    return 0;
}
