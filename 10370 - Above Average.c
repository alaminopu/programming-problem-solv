#include <stdio.h>

int main(){
    int cases;
    int N,i,marks[101],sum=0,count=0;
    double avg, percentage;

    scanf("%d",&cases);
    while(cases--){
        sum = 0;
        count = 0;
        scanf("%d",&N);
        for(i=0; i<N; i++){
            scanf("%d",&marks[i]);
            sum = sum + marks[i];
        }
        avg = (double)sum/N;

        for(i=0; i<N; i++){
            if((double)marks[i]>avg){
                count++;
            }
        }
        percentage = ((double)(count*100))/N;

        printf("%.3lf%%\n",percentage);
    }
    exit(0);

    return 0;
}
