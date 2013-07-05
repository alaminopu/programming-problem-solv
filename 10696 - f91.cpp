#include <cstdio>

int f91(int N){
    if(N<=100){
        return f91(f91(N+11));
    }else if(N>=101){
        return N-10;
    }
}

int main(){
    int N, x;
    while(scanf("%d",&N)!=EOF){
        if(N==0) break;
        x = f91(N);
        printf("f91(%d) = %d\n",N, x);
    }
    return 0;
}
