#include <stdio.h>
#include <math.h>

int tax_calculator(long long  money){
    long long first,second,third,four;
    double tax=1;
    if(money>180000)
        {
            first=money-180000;

                if(first>=300000)
                {
                    tax=tax*(300000*0.1);

                    second=first-300000;

                       if(second>=400000)
                       {
                           tax=tax+(400000*0.15);

                           third=second-400000;

                               if(third>=300000)
                               {
                                   tax=tax+(300000*0.20);

                                   four=third-300000;

                                   tax=tax+(four*0.25);
                               }
                               else
                               tax=tax+(third*0.20);

                       }
                       else
                       tax=tax+(second*0.15);

                }
                else
                tax=tax*(first*0.10);
        }
        else
        tax=0;

    long long rex = long(tax);
    if(tax>rex){
        rex = rex+1;
    }

    return rex;
}


int main(){
    int cases, caseno=0;
    long long ammount,result;
    scanf("%d",&cases);
    while(cases--){
        scanf("%lld",&ammount);
        result = tax_calculator(ammount);
        if((result<2000 && result!=0)){
            result=2000;
        }
        printf("Case %d: %d\n",++caseno,result);
    }
    return 0;
}
