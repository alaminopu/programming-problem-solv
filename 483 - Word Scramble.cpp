#include <cstdio>
#include <cstring>

using namespace std;

void rev(char *p){
    int len = strlen(p);
    char temp[500];
    strcpy(temp,p);
    for(int i=len-1; i>=0; i--)
        printf("%c",temp[i]);
}

int main(){
    char line[1005];
    while(gets(line)!=NULL){
        char *pch;
        pch = strtok(line," ");
        while(pch!=NULL){
            rev(pch);
            pch = strtok(NULL," ");
            if(pch!=NULL){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
