#include <cstdio>
#include <cstring>

long long power(long long x)
{
    long long result=1,i;
    for(i=1; i<=x; i++){
        result = result * 2;
    }
    return result;
}

long long fibonacii(unsigned long long n){
    unsigned long long i,h,j,k,t;
    i = h = 1;
    j=k=0;
    while(n>0){
        if(n%2==1){
            t = j*h;
            j = i*h + j*k + t;
            i = i*k + t;
        }
        t = h*h;
        h = 2*k*h+t;
        k = k*k+t;
        n = (unsigned long long) n/2;
    }
    return j;
}

int main(){
    long long n,m,result,p;
    while(scanf("%lld %lld",&n,&m)!=EOF){
        p = power(m);
        unsigned long long k=fibonacii(n);
        printf("%llu\n",k%p);
    }
    return 0;
}
