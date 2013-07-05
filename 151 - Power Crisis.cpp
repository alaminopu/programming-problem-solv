#include <cstdio>

int main(){
    int N, M, arr[105];
    while(scanf("%d",&N) && N){
        int i,j,k,L,x;

        // m selection loop
       for(L=1; ; L++){
            M=L;
            i=1;
            k=0;
            j=0;
            //array generate
            for(x=0; x<N; x++){
                arr[x]= x+1;
            }

            arr[j]=-1;
            // counter loop
            while(i<N-1){
                // cutter loop
                    if(arr[j]!=-1){
                        k++;
                    }

                    if(k==M){
                        //printf("M: %d j:%d arr: %d i: %d\n",M,j,arr[j],i);
                        arr[j]=-1;
                        i++;
                        k=0;
                    }
                    j++;
                    if(j>=N) j= j-N;
            }
            // breaking m selection loop
            if(arr[12]==13) break;
        }

        printf("%d\n",M);
    }
    return 0;
}
