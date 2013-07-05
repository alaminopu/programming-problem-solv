#include <cstdio>
#include <cstring>


int main(){
    char mm[308], nn[308];
    int m, n, len1, len2;
    while(scanf("%s %s",mm,nn)!=EOF){
        if(strcmp(mm,"0")==0 && strcmp(nn,"0")==0) break;
        len1 = strlen(mm);
        len2 = strlen(nn);
        m = mm[len1-1]-48;
        if(len2>1){
            n = (nn[len2-2]-48)*10+(nn[len2-1]-48);
            if(n==0){
                n = 4;
            }
        }else{
            n = (nn[len2-1]-48);
        }

        //printf("%d %d\n", m, n);
        int res=1;
        for(int i=1; i<=n; i++){
            res = (res * m)%10;
            //printf("x: %d\n", res);
        }
        int k = res%10;
        printf("%d\n", k);

    }
    return 0;
}
