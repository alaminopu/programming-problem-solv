#include <cstdio>
#include <cmath>
#define PI acos(-1)


int main(){
    int cas,L;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d",&L);

        double W, r,FA, AR, AG;
        W = (double)(6*L)/10;
        r = (double) L/5;
        FA = W*L;
        AR = PI*(r*r);
        AG = FA-AR;

        printf("%.2lf %.2lf\n",AR,AG);
    }
    return 0;
}
