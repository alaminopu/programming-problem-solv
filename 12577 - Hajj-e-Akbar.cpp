#include <cstdio>
#include <cstring>


int main(){
    char word[20],caseno=0;
    while(scanf("%s",word)!=EOF){
        if(strcmp(word,"*")==0) break;

        if(strcmp(word,"Hajj")==0){
            printf("Case %d: Hajj-e-Akbar\n",++caseno);
        }else if(strcmp(word,"Umrah")==0){
            printf("Case %d: Hajj-e-Asghar\n",++caseno);
        }
    }
    return 0;
}
