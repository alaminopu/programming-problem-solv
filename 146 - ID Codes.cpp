#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    char str[52];
    while(scanf("%s",str)!=EOF){
        if(strcmp(str,"#")==0) break;
        int len = strlen(str);
        if(next_permutation(str,str+len)){
            printf("%s\n",str);
        }else{
            printf("No Successor\n");
        }

    }
    return 0;
}
