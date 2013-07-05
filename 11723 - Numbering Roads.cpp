#include <cstdio>

using namespace std;

int main(){
    int R,N,caseno=0;
    while(scanf("%d %d",&R,&N)!=EOF){
        if(R==0 && N==0) break;
        int cal, rest,count=0,flag=1;
        cal = R-N;
        rest = N*26;
        if(cal>rest){
            flag=0;
        }
        else{
            while(cal!=0 && cal>0){
                cal = cal-N;
                count++;
            }
        }

        if(flag){
            printf("Case %d: %d\n",++caseno,count);
        }else{
            printf("Case %d: impossible\n",++caseno);
        }
    }
    return 0;
}
