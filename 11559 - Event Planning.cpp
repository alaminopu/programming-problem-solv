#include <cstdio>

int main(){
    int N, B, Hn, Wn;
    int p,k;

    while(scanf("%d %d %d %d",&N,&B,&Hn,&Wn)!=EOF){
        int m=999999999;
        int i, j, k;
        for(i=0; i<Hn; i++){
            scanf("%d",&p);
            for(j=0; j<Wn; j++){
                scanf("%d",&k);
                if(k>=N && N*p<m){
                    m=N*p;
                }
            }
        }

        if(m<=B){
            printf("%d\n",m);
        }else{
            printf("stay home\n");
        }
    }
    return 0;
}
