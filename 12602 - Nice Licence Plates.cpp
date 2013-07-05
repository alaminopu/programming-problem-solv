#include <cstdio>
#include <cstdlib>

int main(){
    int cas;
    char str[5];
    int x, k[]={676,26,1};
    scanf("%d",&cas);
    getchar();
    while(cas--){
        char ch;
        x=0;
        int j=0;
        while((ch=getchar())!='\n'){
            if(ch>=65 && ch!='-'){
                str[j]=ch;
                j++;
            }
            else if(ch>=48 && ch<=57){
                x = x*10+ (ch-48);
            }

        }

        int sum = 0;
        for(int i=0; i<3; i++){
            sum = sum + (str[i]-65)*k[i];
        }
        int res = abs(sum-x);
        if(res<=100){
            printf("nice\n");
        }else{
            printf("not nice\n");
        }
    }
    return 0;
}
