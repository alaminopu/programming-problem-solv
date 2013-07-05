#include <cstdio>

int main(){
    int H, U, D, F,x;
    int daycounter;

    while(scanf("%d %d %d %d",&H,&U,&D,&F)!=EOF){
        if(H==0) break;
        daycounter=0;
        int i=0;

        H = H*100;
        x = U*F;
        U = U*100;
        D = D*100;


        while(i<=H&&i>=0){
            i = i+U;
            U = U - x;
            if(U<0){
                 U = 0;
            }
            if(i<=H){
                i = i-D;
            }
            daycounter++;

        }

        if(i>H){
            printf("success on day %d\n",daycounter);
        }else{
            printf("failure on day %d\n",daycounter);
        }

    }
    return 0;
}
