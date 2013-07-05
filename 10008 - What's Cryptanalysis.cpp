#include <cstdio>
#include <cctype>

int main(){
    int cas,i,k=0,arr[1005]={0};
    char ch;
    scanf("%d", &cas);
    getchar();
    while(cas--){
        while((ch=getchar())!='\n'){
            if(isalpha(ch)){
                ch=tolower(ch);
                if(!arr[ch]) k++;
                arr[ch]++;
            }
        }
    }

    for(int j=0; j<k; j++){
        int max = 0;
        int index = -1;
        for(i=97; i<123; i++){
            if(arr[i]>max && arr[i]>0){
                max = arr[i];
                index = i;
            }else if(arr[i]==max){
                if(i<index){
                    index = i;
                }
            }
        }
        arr[index]=0;
        printf("%c %d\n", toupper(index),max);
    }

    return 0;
}
