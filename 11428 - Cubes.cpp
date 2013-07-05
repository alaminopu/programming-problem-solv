#include <cstdio>

int qubes[101];

void gen_qubes(){
    int i;
    qubes[0]=0;
    for(i=1; i<100; i++){
        qubes[i]= i*i*i;
    }
}

int linear_s(int x){
    for(int i=1; i<100; i++){
        if(qubes[i]==x){
            return i;
        }
    }
    return 0;
}

int main(){
    gen_qubes();
    int N, i, x, y;
    while(scanf("%d",&N) && N){
        for(i=1; i<100; i++){
            if(qubes[i]>N){
                x = i;
                y = linear_s(qubes[i]-N);
                if(y==0){
                    continue;
                }else{
                    break;
                }
            }
        }
        if(y>x || y==0){
            printf("No solution\n");
        }
        else printf("%d %d\n",x,y);
    }
    return 0;

}
