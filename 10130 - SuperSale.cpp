#include <cstdio>
#define MAXX(x, y) (x>y?x:y)

int dp[1002][102];

int P[1002],W[1002];
int N,cap,np;

int greedy(int i, int weight){
    int profit1,profit2;
    //base case
    //printf("i : %d , weight : %d", i, weight);
    if(i>=N) return 0;

    if(dp[i][weight]!=-1) return dp[i][weight];

    if(weight+W[i]<=cap){
        profit1 = P[i]+greedy(i+1,weight+W[i]);
    }else{
        profit1 =0;
    }
    profit2 = greedy(i+1,weight);

    dp[i][weight]=MAXX(profit1,profit2);

    return dp[i][weight];
}

int main(){
    int ii,kk,ll,cases,result;
    scanf("%d",&cases);
    while(cases--){
        result=0;
        scanf("%d",&N);
        for(ii=0; ii<N; ii++){
            scanf("%d %d",&P[ii],&W[ii]);
        }
        scanf("%d",&np);
        for(ll=0; ll<np; ll++){
            for(ii=0; ii<1002; ii++)
                for(kk=0; kk<102; kk++)
                    dp[ii][kk]=-1;
            scanf("%d",&cap);
            result = result + greedy(0,0);
        }
        printf("%d\n",result);
    }
    return 0;

}
