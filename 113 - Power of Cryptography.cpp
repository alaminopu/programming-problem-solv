#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    double p,n,result;
    while(scanf("%lf %lf",&n,&p)!=EOF){
        result = pow(p,1/n);
        printf("%0.lf\n",result);
    }
    return 0;
}
