#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;


int main(){
    char a[105005], b[105005];
    int len1,len2,flag,i,j;
    while(scanf("%s %s",a,b)!=EOF){
        len1 = strlen(a);
        len2=strlen(b);
        //printf("%d %d",len1,len2);
        flag=0;
        for(i=0,j=0; i<len2; i++){
            if(a[j]==b[i]){
                j++;
            }
        }
        if(j==len1) {
                flag=1;
        }
        if(flag)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
