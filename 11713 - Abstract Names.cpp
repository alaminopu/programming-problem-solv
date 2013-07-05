#include <cstdio>
#include <cstring>

using namespace std;

int is_vowel(char a){
    if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'){
        return 1;
    }
    return 0;
}

int main(){
    int cas;
    char orginal_name[25],game_name[25];

    scanf("%d",&cas);
    while(cas--){
        scanf("%s %s",orginal_name,game_name);
        int orginal_name_len = strlen(orginal_name);
        int game_name_len = strlen(game_name);
        if(orginal_name_len==game_name_len){
            int i,j,flag=1;
            for(i=0; i<orginal_name_len; i++){
                if(orginal_name[i]!=game_name[i]){
                    if(!is_vowel(orginal_name[i]) ||  !is_vowel(game_name[i])){
                        flag=0;
                    }
                }
            }

            if(flag){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }else{
            printf("No\n");
        }
    }
    return 0;
}
