#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, n, p, q, dif;
    while(scanf("%d", &n) != EOF){
        char A[n+1];
        int input[n];

        memset(A, '\0', sizeof(A));

        for(i=0; i<n; i++){
            scanf("%d", &input[i]);
        }

        for(i=1; i<n; i++){
            dif = abs(input[i-1]-input[i]);

            if(dif >= n){
                printf("Not jolly\n");
                break;
            }

            else if(A[dif] == '\0'){
                A[dif] = 'a';
            }

            else{
                printf("Not jolly\n");
                break;
            }
        }

        if(i==n)
            printf("Jolly\n");

    }
    return 0;
}