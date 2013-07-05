#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int cas, casno=0;
    scanf("%d",&cas);
    while(cas--){
        int N,K,L;
        scanf("%d",&N);

        K = (N*63)+7492;
        L = (K*5)-498;
        int res = abs(L);
        L = ((res%100)-(res%10))/10;
        printf("%d\n",L);
    }
    return 0;
}
