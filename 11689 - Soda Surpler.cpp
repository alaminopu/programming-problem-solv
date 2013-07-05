#include <cstdio>

int main(){
    int cas,e,f,c,N,numofSoda;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d %d %d",&e,&f,&c);
        N= e+f;
        numofSoda=0;
        while(N>c){
            numofSoda += N/c;
            N = N/c+N%c;
        }

        if(N==c) numofSoda++;
        printf("%d\n",numofSoda);
    }
    return 0;
}
