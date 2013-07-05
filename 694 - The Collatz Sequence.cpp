#include <cstdio>

int main(){
    long long m,n;
    long long caseno=0;
    while(scanf("%lld %lld",&m,&n)!=EOF){
        if(m<0 && n<0){
            break;
        }
        long long count=0, k =m;

        for(; ;){
            if(m==1){
                count++;
                break;
            }
            if(m>n) {
                break;
            }

            if(m%2==0){
                m = m/2;
                count++;
            }else{
                m = 3*m+1;
                count++;
            }
        }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++caseno,k,n,count);
    }
    return 0;
}
