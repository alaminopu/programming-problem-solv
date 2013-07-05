#include <cstdio>
#include <cstring>

int main(){
    int cas, casno=0;
    char judge[50],team[50],temp[50];
    scanf("%d",&cas);
    getchar();
    while(cas--){
        gets(team);
        gets(judge);
        int len1,len2;
        len1 = strlen(team);
        len2= strlen(judge);

        int i=0,j=0,flag=0;
        while(i<len1){
            if(team[i]==' ') flag=1;
            else{
                temp[j++]=team[i];
            }
            i++;
        }
        temp[j]='\0';


        if(strcmp(team,judge)==0){
            printf("Case %d: Yes\n",++casno);
        }else if(flag && strcmp(temp,judge)==0){
            printf("Case %d: Output Format Error\n",++casno);
        }
        else{
            printf("Case %d: Wrong Answer\n",++casno);
        }
    }
    return 0;
}
