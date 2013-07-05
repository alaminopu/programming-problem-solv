#include <cstdio>
int ans[105][105];
int M,N;

void minesw(int i, int j){
    if(i>=0 && j>=0 && i<M && j<N && ans[i][j]!=-1){
        ans[i][j]++;
    }
}

int main(){
    int i, j, casno=0, flag=0;
    char mine[105][105];

    while(scanf("%d %d",&M, &N)!=EOF){
        getchar();
        if(M==0 && N==0){
            break;
        }

        for(i=0; i<M; i++){
            for(j=0; j<N; j++){
                ans[i][j]=0;
            }
        }

        for(i=0; i<M; i++){
            for(j=0; j<N; j++){
                scanf("%c",&mine[i][j]);
                if(mine[i][j]=='*'){
                    ans[i][j]=-1;
                }
            }
            getchar();
        }

        for(i=0; i<M; i++){
            for(j=0; j<N; j++){
              if(ans[i][j]==-1){
                // row before mine
                minesw(i-1, j-1);
                minesw(i-1, j);
                minesw(i-1, j+1);
                // mine row
                minesw(i, j-1);
                minesw(i, j+1);
                // row after mine
                minesw(i+1, j-1);
                minesw(i+1, j);
                minesw(i+1, j+1);
              }
            }
        }

        if(flag!=0) printf("\n");
        flag = 1;
        printf("Field #%d:\n",++casno);
        for(i=0; i<M; i++){
            for(j=0; j<N; j++){
              if(i==0){
                if(ans[i][j]==-1){
                    printf("*");
                }else{
                    printf("%d",ans[i][j]);
                }
              }else{
                  if(ans[i][j]==-1){
                        printf("*");
                    }else{
                        printf("%d",ans[i][j]);
                    }
             }
            }
            printf("\n");
        }
    }
    return 0;
}
