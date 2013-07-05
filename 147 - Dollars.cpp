#include <cstdio>
#include <cstring>
#define MAX 100055

long long nway[MAX];
int coin[11]={10000,5000,2000,1000,500,200,100,50,20,10,5};

void counting_change(){
    int i,c,j,v=11;
    memset (nway, 0, sizeof (nway));
    nway[0]=1;
    for(i=0; i<v; i++){
        c=coin[i];
        for(j=c; j<=30000; j++){
            nway[j] += nway[j-c];
        }
    }
}



int main(){
    int x;
    double N;
    counting_change();
    while(scanf("%lf",&N) && N){
        x = int(N*100+0.50);
        //printf("%d",x);
        printf("%6.2lf%17lld\n",N,nway[x]);
    }
    return 0;
}
