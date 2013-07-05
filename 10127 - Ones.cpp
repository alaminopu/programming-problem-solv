#include <cstdio>

using namespace std;


int main(){
    long long number,temp,digit,result,rem;
    //scanf("%d",&cases);
    while(scanf("%lld",&number)!=EOF){
        temp=1;
        result =1;
        digit = temp;
        rem=temp%number;
        while(rem!=0){
            rem = ((rem*10)+digit)%number;
            //printf("%d",rem);
            result++;
        }
        printf("%lld\n",result);
    }
    return 0;
}
