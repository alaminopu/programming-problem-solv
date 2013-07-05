#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int cas, casno=0;
    long long a[3];
    scanf("%d",&cas);
    while(cas--){
        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        if(a[0]+a[1]>a[2]){
            if((a[0]==a[1])&& (a[1]==a[2]) && (a[0]==a[2])){
                printf("Case %d: Equilateral\n",++casno);
            }else if((a[0]==a[1])|| (a[1]==a[2]) || (a[0]==a[2])){
                printf("Case %d: Isosceles\n",++casno);
            }else{
                printf("Case %d: Scalene\n",++casno);
            }
        }else{
            printf("Case %d: Invalid\n",++casno);
        }

    }
    return 0;
}
