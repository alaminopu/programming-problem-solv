#include <cstdio>
#include <cstring>

int main(){
    char ch[110],*str;
    int N,k,z;
    while(scanf("%d",&N) && N){
        str = ch;
        scanf("%s",str);
        int len = strlen(str);
        z=len/N;
        for(int i=0; i<len; i=i+z){
            k = i+z;
            for(int j=k-1; j>=i; j--){
                printf("%c",*(str+j));
            }
        }
        printf("\n");
    }
    return 0;
}
