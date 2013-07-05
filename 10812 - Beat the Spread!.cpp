#include <cstdio>

using namespace std;

int main(){
    int a,b,sum,diff;
    int cas;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d %d",&sum,&diff);
        b= (sum-diff)/2;
        a = diff+b;
        if(((a+b)!=sum || (a-b)!=diff) || a<0 || b<0){
            printf("impossible\n");
        }else{
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}
