#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    int cas,casno=0;
    char credit[25],c;
    scanf("%d",&cas);
    getchar();
    while(cas--){
        int i=0;
        while((c=getchar())!='\n'){
            if(c !=' '){
                credit[i]=c;
                i++;
            }
        }
        //credit[16]='\0';
        //printf("%s",credit);
        int mul,j,sum1=0,sum2=0;
        for(i=14,j=0; i>=0; i=i-2){
            mul=(int)(credit[i]-48)*2;
            sum1 += mul%10+mul/10;
            sum2 +=(int)(credit[i+1]-48);
            j++;
        }
        int k = sum1+sum2;
        //printf("%d",k);
        if(k%10==0){
            printf("Valid\n");
        }else{
            printf("Invalid\n");
        }
    }
    return 0;
}
