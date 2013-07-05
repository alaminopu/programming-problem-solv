#include <cstdio>

int main(){
    int N;
    while(scanf("%d",&N)!=EOF){
        int rem,numOfcola=N;

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
