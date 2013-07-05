#include <cstdio>

int dp[10005];

long long numOfMale(int N){
    if(N==0){
        return 0;
    }else if(N==1){
        return 1;
    }else if(dp[N]!=-1){
        return dp[N];
    }

    dp[N]=numOfMale(N-1)+ numOfMale(N-2)+1;

    return dp[N];
}


long long F(int N){
    if(N==0) return 1;
    else return numOfMale(N-1)+1;
}


int main(){
    int N;
    long long male, total, female;
    while(scanf("%d",&N)!=EOF){
        if(N== -1) break;
        for(int i=0; i<10005; i++) dp[i]=-1;

        male = numOfMale(N);
        female = F(N);

        total = male+female;
        printf("%lld %lld\n",male,total);

    }
    return 0;
}
