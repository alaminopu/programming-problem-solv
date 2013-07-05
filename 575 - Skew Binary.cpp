#include <cstdio>
#include <cstring>
#include <cmath>

int main(){
    char n[1500];
    while(scanf("%s",n)!=EOF){
        if(strcmp(n,"0")==0) break;

        int len= strlen(n);
        int k= len;
        int sum =0;
        for(int i=0; i<len; i++){
            sum += (n[i]-48)*(pow(2,k--)-1);
        }
        printf("%d\n",sum);
    }
}
