#include <cstdio>
#include <cmath>

int Mile(int N){
    int res;
    res = ceil(N/30+0.50);
    return res*10;
}

int Juice(int N){
    int res;
    res = ceil(N/60+0.50);
    return res*15;
}

int main(){
    int cases,caseno=0;
    int N, num[25],i,sumMile, sumJuice;
    scanf("%d",&cases);
    while(cases--){
        sumMile=sumJuice=0;
        scanf("%d",&N);
        for(i=0; i<N; i++){
            scanf("%d",&num[i]);
            sumMile = sumMile + Mile(num[i]);
            sumJuice = sumJuice+ Juice(num[i]);

            //printf("Mile : %d Juice : %d\n", sumMile, sumJuice);
        }
        if(sumMile==sumJuice){
            printf("Case %d: Mile Juice %d\n",++caseno,sumJuice);
        }else if(sumJuice<sumMile){
            printf("Case %d: Juice %d\n",++caseno,sumJuice);
        }else{
            printf("Case %d: Mile %d\n",++caseno,sumMile);
        }
    }
}
