#include <cstdio>

int main(){
    int a,b,res;
    char ch;
    int count=0;
    while(scanf("%d %c %d = %d",&a,&ch,&b,&res)!=EOF){
        getchar();
        int val = res;
        if(ch=='+'){
            if(a+b==val){
                //printf("%d %d\n",a,b);
                count++;
            }
        }else if(ch=='-'){
            if(a-b==val){
                //printf("%d %d\n",a,b);
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
