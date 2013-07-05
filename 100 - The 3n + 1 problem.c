#include <stdio.h>

void swap (int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int i,j,count,cycle,max=0,p;
    int newi,newj;

    while(scanf("%d %d",&i, &j)!=EOF){
        max=0;
        newi = i;
        newj = j;
        if(i>j){
           swap(&i,&j);
        }
        for(count=i; count<=j; count++){
            p = count;
            cycle = 1;
            while(p!=1){
                if(p%2==0){
                    p = p/2;
                }
                else{
                    p = (3*p)+1;
                }
                ++cycle;
            }
            if(cycle>max){
                max = cycle;
            }
        }
        printf ("%d %d %d\n", newi, newj,max);
    }
    return 0;
}
