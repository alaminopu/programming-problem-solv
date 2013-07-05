#include <cstdio>

int main(){
    int N, arr[200],res, i,sum, brick, casno=0;
    while(scanf("%d",&N)!=EOF){
        if(N==0) break;
        sum=0;
        for(i=0; i<N; i++){
            scanf("%d", &arr[i]);
            sum = sum + arr[i];
        }
        res = sum/N;
        brick=0;
        for(i=0; i<N; i++){
            if(arr[i]>res){
                brick = brick + (arr[i]-res);
            }
        }

        printf("Set #%d\n", ++casno);
        printf("The minimum number of moves is %d.\n\n",brick);

    }
    return 0;
}
