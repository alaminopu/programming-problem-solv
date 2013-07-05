#include <cstdio>

int main(){
    int cas, casno=0,K,HH,MM,AH,AM,TT,curT,arivT;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d %d:%d",&K,&HH,&MM);
        curT = HH*60+MM;
        int sum,minr=10000000;
        for(int i=0; i<K; i++){
            scanf("%d:%d %d",&AH,&AM,&TT);
            arivT = AH*60+AM;
            if(curT>arivT){
                sum = 1440+arivT-curT+TT;
            }else{
                sum = arivT-curT+TT;
            }
            if(minr>sum) minr=sum;
        }
        printf("Case %d: %d\n",++casno,minr);
    }
    return 0;
}
