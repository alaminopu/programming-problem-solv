#include <cstdio>
#include <cmath>

int main(){
    double x,y,z;
    double r,area;

    while(scanf("%lf %lf %lf",&x,&y,&z)!=EOF){
        r=(2*((x*x*y*y)+(y*y*z*z)+(z*z*x*x)))-((pow(x,4)+pow(y,4)+pow(z,4)));
        area=((sqrt(r))/3);
        if(area>0){
            printf("%.3lf\n",area);
        }else{
            area = -1;
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
