#include <cstdio>

using namespace std;

int main(){
    int cas, casno=0;
    scanf("%d",&cas);
    printf("Lumberjacks:\n");
    while(cas--){
        int N=10;
        int lember[12];
        for(int i=0; i<N; i++)
            scanf("%d",&lember[i]);
        int flag1=1,flag2=1;

        for(int i=0; i<N-1; i++){
            int j=i+1;
            if(lember[i]> lember[j]){
                flag2=0;
                continue;
            }

            if(lember[i]<lember[j]){
                flag1=0;
                continue;
            }

        }

        if((flag1 && !flag2)|| (!flag1 && flag2)){
            printf("Ordered\n");
        }else{
            printf("Unordered\n");
        }

    }
    return 0;
}
