#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    return a<b;
}

int main(){
    char str[1005];
    int arr[1005];
    bool flag = false;
    while(gets(str)!=NULL){
        //getchar();
        if(flag) printf("\n");
        flag = true;
        int len = strlen(str);
        int aski,k=0;
        for(int i=0; i<1005; i++) {
            arr[i]=0;
        }
        for(int i=0; i<len; i++){
            aski=str[i];
            if(!arr[aski]) k++;
            arr[aski]++;
        }
        for(int j=0; j<k; j++){
            int max = 99999;
            int index = -1;
            for(int i=0; i<1005; i++){
                if(arr[i]<max && arr[i]>0){
                    max = arr[i];
                    index = i;
                }else if(arr[i]==max){
                    if(i>index){
                        index = i;
                    }
                }
            }
            arr[index]=0;
            printf("%d %d\n",index,max);
        }
    }
    return 0;
}
