#include <cstdio>
#include <cstring>

int main(){
    int cas,casno=0, flag=0;
    char line[8505],final[8505],ch;
    scanf("%d",&cas);
    getchar();
    while(cas--){
        int count=0,nflag=0;
        if(flag>0) printf("\n");
        flag=1;

        while((ch=getchar())!=EOF){
                if(ch=='\n' && nflag){
                    break;
                }

                if(ch=='\n') nflag=1;
                else nflag=0;

                switch(ch){
                    case '0':
                        printf("O");
                        break;
                    case '1':
                        printf("I");
                        break;
                    case '2':
                        printf("Z");
                        break;
                    case '3':
                        printf("E");
                        break;
                    case '4':
                        printf("A");
                        break;
                    case '5':
                        printf("S");
                        break;
                    case '6':
                        printf("G");
                        break;
                    case '7':
                        printf("T");
                        break;
                    case '8':
                        printf("B");
                        break;
                    case '9':
                        printf("P");
                        break;
                    default:
                        printf("%c",ch);
                        break;

                }
            }
        }
    return 0;
}
