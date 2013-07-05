#include <cstdio>

int main(){
    int cas, casno=0;
    char enmsg[2000];
    scanf("%d",&cas);

    while(cas--){
        scanf("%s",enmsg);
        char *data = enmsg;
        char letter;
        int number, offset;
        printf("Case %d: ",++casno);
        while(sscanf(data,"%c%d%n",&letter,&number,&offset)!=EOF){
            data = data+offset;
            //printf("%d", offset);
            for(int i=0; i<number; i++){
                printf("%c",letter);
            }
        }
        printf("\n");
    }

    return 0;
}
