#include <cstdio>
#include <cmath>

int main(){
    int caseno=0;
    double u, v, w,res1, res2,res3,res4,res5,res6,res7,res8;
    int n;
    while(scanf("%d",&n) && n){
        scanf("%lf %lf %lf",&u,&v,&w);
        switch(n){
            case 1:
                res2 = (v-u)/w;
                res1 = (u*w)+0.5*res2*w*w;
                printf("Case %d: %.3lf %.3lf\n",++caseno,res1,res2);
                break;
            case 2:
                res4 = (v-u)/w;
                res3 = (u*res4)+0.5*w*res4*res4;
                printf("Case %d: %.3lf %.3lf\n",++caseno,res3,res4);
                break;
            case 3:
                res5 = sqrt(u*u+2*v*w);
                res6 = (res5-u)/v;
                printf("Case %d: %.3lf %.3lf\n",++caseno,res5,res6);
                break;
            case 4:
                res7= sqrt(u*u-2*v*w);
                res8 = (u-res7)/v;
                printf("Case %d: %.3lf %.3lf\n",++caseno,res7,res8);
                break;
            default:
                break;
        }
    }
    return 0;
}
