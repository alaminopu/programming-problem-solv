#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
int rem[15],i;

int binary(int n){
    int count =0;
    i =0;
    while(n!=0){
        rem[i]=n%2;
        if(rem[i]==1) count++;
        n=n/2;
        i++;
    }
    return count;
}

int main(){
    int cas,casno=0;
    scanf("%d",&cas);
    while(cas--){
        int N, K,m,n;
        char ch;
        scanf("%x %c %x",&N,&ch,&K);
        //printf("%d %d\n",N,K);
        for(m=0; m<15; m++)
            rem[m]=0;
        binary(N);
        for(n=12; n>=0; n--){
            printf("%d",rem[n]);
        }
        printf(" %c ",ch);
        for(m=0; m<15; m++)
            rem[m]=0;
        binary(K);
        for(n=12; n>=0; n--){
            printf("%d",rem[n]);
        }
        if(ch=='+'){
            printf(" = %d\n",N+K);
        }else{
            printf(" = %d\n",N-K);
        }
    }
    return 0;
}
