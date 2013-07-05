#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int cas, casno=0;
    int a[3];
    scanf("%d",&cas);
    while(cas--){
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        printf("Case %d: %d\n",++casno,a[1]);
    }
    return 0;
}
