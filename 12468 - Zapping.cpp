#include <cstdio>
#include <cstdlib>

int main(){
    int i, j, k, a, b;
    while(scanf("%d %d", &a,&b)!=EOF){
        if(a==-1&&b== -1) break;
        k = abs(a-b);
        if(k>50) printf("%d\n",100-k);
        else printf("%d\n",k);
    }
    return 0;
}



