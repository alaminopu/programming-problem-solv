#include <cstdio>

int main(){
    int cas,casno=0;
    scanf("%d",&cas);
    while(cas--){
        int n,P,Q,i,ans=0;
        int sum=0,K[40];
        scanf("%d %d %d",&n,&P,&Q);
        for(i=0; i<n; i++){
            scanf("%d",&K[i]);
            sum = sum+K[i];
        }

        if(n<P && sum<=Q){
            ans=n;
        }else{
            int nsum=0,j=0;
            while((j<=P) && (nsum<=Q)){
                nsum=nsum+K[j];
                j++;
            }
            ans = j-1;
        }

        printf("Case %d: %d\n",++casno,ans);
    }
    return 0;
}
