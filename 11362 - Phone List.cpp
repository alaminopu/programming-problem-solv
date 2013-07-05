#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>


using namespace std;

string num[10500];

bool prefix(string temp,string gnum){
    int tlen = temp.size();
    int mlen = gnum.size();

    if(tlen>mlen) return false;

    for(int j=0; j<tlen; j++){
        if(temp[j]!=gnum[j]){
            return false;
        }
    }

    return true;
}

int main(){
    int cas;
    int n,i;
    scanf("%d",&cas);
    while(cas--){
        scanf("%d",&n);
        for(i=0; i<n; i++){
            cin>>num[i];
        }

        sort(num,num+n);

        int flag=1;
        for(i=0; i<n-1; i++){
            if(prefix(num[i],num[i+1])){
                flag=0;
                break;
            }
        }

        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
