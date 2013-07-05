#include <stdio.h>
#include <math.h>

int main(){
    int i,n;
    double student[1001],avg,sum,positiveSum,diff, NegativeSum;

    while(scanf("%d",&n)==1){
        /* resting values */
        positiveSum=NegativeSum=sum = 0.0;
        if(n==0){
            return 0;
        }
        /* taking input and make the sum */
        for(i=0; i<n; i++){
            scanf("%lf",&student[i]);
            sum = sum+ student[i];
        }
        avg = sum/n;


        /* Doing actual calculation */
        for(i=0; i<n; i++){
            /* Rounding two decimal place */
            diff = (double)(long)((student[i]-avg)*100)/100.0;
            if(diff<0){
                NegativeSum = NegativeSum + diff;
            }
            else{
                positiveSum = positiveSum + diff;
            }

        }
        if(-NegativeSum > positiveSum){
            printf("$%0.2lf\n",-NegativeSum);
        }
        else{
            printf("$%0.2lf\n",positiveSum);
        }
    }
    return 0;
}
