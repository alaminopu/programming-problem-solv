#include <cstdio>


int main(){
    int cas,casno=0, term1,term2, final, attendance, clastest[3];
    int max1,max2, min1,avg,sum;
    scanf("%d", &cas);
    while(cas--){
        scanf("%d %d %d %d %d %d %d",&term1,&term2, &final, &attendance, &clastest[0], &clastest[1], &clastest[2]);
        if(clastest[0]>clastest[1]){
            max1=clastest[0];
            min1 = clastest[1];
            if(min1>clastest[2]){
                max2= min1;
            }else{
                max2=clastest[2];
            }
        }else{
            max1=clastest[1];
            min1=clastest[0];
            if(min1>clastest[2]){
                max2= min1;
            }else{
                max2=clastest[2];
            }
        }

        avg = (max1+max2)/2;
        sum = term1+term2+attendance+final+avg;
        if(sum>=90){
            printf("Case %d: A\n",++casno);
        }else if(sum>=80 && sum<90){
            printf("Case %d: B\n",++casno);
        }else if(sum>=70 && sum<80){
            printf("Case %d: C\n",++casno);
        }else if(sum>=60 && sum<70){
            printf("Case %d: D\n",++casno);
        }else if(sum<60){
            printf("Case %d: F\n",++casno);
        }

    }
    return 0;
}
