#include <cstdio>

int main(){
    int cas;
    int HH,MM,MID,RM;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d:%d",&HH,&MM);
        MM = 60-MM;
        if(MM==60){
            HH=12-HH;
            if(HH==0){
                HH=12;
            }
            MM=0;
        }else{
            if(HH==12){
                HH = 12-1;
            }else{
                HH=12-(HH+1);
                if(HH==0){
                    HH=12;
                }
            }
        }

        printf("%.2d:%.2d\n",HH,MM);

    }
    return 0;
}
