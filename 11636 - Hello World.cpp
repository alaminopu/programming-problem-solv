#include <cstdio>

int main(){
    int cas, casno=0,N,res;
    while(scanf("%d",&N)!=EOF){
        if(N<0) break;
        int i,sum=0;
        int count=0;
        for(i=1; i<N;){
            sum = sum+i;
            i=i*2;
            count++;
        }
        printf("Case %d: %d\n",++casno,count);
    }
    return 0;
}
