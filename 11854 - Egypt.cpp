#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if(a==0 && b==0 && c==0) break;

        if(a+b>c|| a+c>b || b+c>a){
            if(a*a+b*b==c*c|| a*a+c*c==b*b|| b*b+c*c==a*a)
                printf("right\n");
            else printf("wrong\n");
        }else printf("wrong\n");
    }
}
