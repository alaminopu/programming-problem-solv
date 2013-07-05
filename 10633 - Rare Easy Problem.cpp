#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    long long K, N, M,i,j, X, Y,Z, num[10005];
    while(scanf("%lld",&K)!=EOF){
        if(K==0) break;
        N = K+ K/9;
        X = N-10;
        Y= N+10;
        for(i=X,j=0; i<=Y; i++){
            Z = i/10;
            Z = i-Z;
            if(K==Z){
                //printf("i:%d\n",i);
                num[j++]=i;
            }
        }
        //printf("%d",j);
        sort(num,num+j);

        for(i=0; i<j; i++){
            if(i==j-1){
                printf("%lld\n",num[i]);
            }else
            printf("%lld ",num[i]);
        }
    }
    return 0;
}
