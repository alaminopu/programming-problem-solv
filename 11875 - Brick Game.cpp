#include <cstdio>

int main(){
    int cas,casno=0;
    int n, K[12];
    scanf("%d",&cas);
    while(cas--){
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            scanf("%d",&K[i]);
        }
        int res = ((n-1)/2);
        printf("Case %d: %d\n",++casno,K[res]);
    }
    return 0;
}
