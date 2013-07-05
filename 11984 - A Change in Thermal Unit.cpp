#include <cstdio>

int main(){
    int cases,caseno=0;
    float F,C,D;
    scanf("%d",&cases);
    while(scanf("%f %f",&C,&F)!=EOF){
        if(F!=0){
            D = (F*5)/9.0;
            C= C+D;
        }
        printf("Case %d: %0.2f\n",++caseno,C);
    }
    return 0;
}
