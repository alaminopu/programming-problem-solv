#include <cstdio>

int main(){
    int cas, casno=0;
    int N[60], *p, i,j,n,countL,countH,x;
    scanf("%d",&cas);
    while(cas--){
        p=N;
        scanf("%d",&n);
        for(i=0; i<n; i++){
            scanf("%d",(p+i));
        }

        countL =0;
        countH=0;
        x = *(p+0);
        for(i=1; i<n; i++){
            if(x>*(p+i)){
                countL++;
                x=*(p+i);
            }else if(x==*(p+i)){
                continue;
            }else{
                countH++;
                x=*(p+i);
            }
        }

        printf("Case %d: %d %d\n",++casno,countH,countL);


    }
    return 0;
}
