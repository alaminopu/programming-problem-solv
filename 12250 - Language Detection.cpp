#include <cstdio>
#include <cstring>

int main(){
    char lang[50];
    int caseno=0;
    while(scanf("%s",lang)!=EOF){
        if(strcmp(lang,"#")==0) break;

        if(strcmp(lang,"HELLO")==0){
            printf("Case %d: ENGLISH\n",++caseno);
        }else if(strcmp(lang,"HOLA")==0){
            printf("Case %d: SPANISH\n",++caseno);
        }else if(strcmp(lang,"HALLO")==0){
            printf("Case %d: GERMAN\n",++caseno);
        }else if(strcmp(lang,"BONJOUR")==0){
            printf("Case %d: FRENCH\n",++caseno);
        }else if(strcmp(lang,"CIAO")==0){
            printf("Case %d: ITALIAN\n",++caseno);
        }else if(strcmp(lang,"ZDRAVSTVUJTE")==0){
            printf("Case %d: RUSSIAN\n",++caseno);
        }else{
            printf("Case %d: UNKNOWN\n",++caseno);
        }
    }
    return 0;
}
