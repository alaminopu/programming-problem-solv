#include <cstdio>
#include <cstring>
#define MAX 100055

long long nway[MAX];
int coin[5]={50,25,10,5,1};

void counting_change(){
    int i,c,j,v=5;
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
    int N;
    counting_change();
    while(scanf("%d",&N)!=EOF){

        if(nway[N]!=1)
            printf("There are %lld ways to produce %d cents change.\n",nway[N],N);
        else
            printf("There is only 1 way to produce %d cents change.\n",N);
    }
    return 0;
}
