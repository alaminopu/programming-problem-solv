#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int cas,casno=0;
    long long N,i,j,K;
    scanf("%d",&cas);
    while(cas--){
        scanf("%lld",&N);
        vector<long long> pos,neg,flor;
        int lenp=0, lenn=0;
        for(i=0; i<N; i++){
            scanf("%lld",&K);
            if(K>0){
                pos.push_back(K);
                lenp++;
            }else{
                K = K*-1;
                neg.push_back(K);
                lenn++;
            }
        }
        //printf("Enter");
        sort(pos.begin(),pos.end());
        sort(neg.begin(),neg.end());
        int flagp=1, flagn=1;
        while(!pos.empty() && !neg.empty()){
            if(pos.back()>neg.back() && flagp){
                flor.push_back(pos.back());
                //printf("pushed pos %d\n",pos.back());
                pos.pop_back();
                flagp=0;
                flagn=1;
            }else if(pos.back()<neg.back() && flagn){
                flor.push_back(neg.back());
               // printf("pushed %d\n",neg.back());
                neg.pop_back();
                flagn=0;
                flagp=1;
            }else if(!flagp){
                pos.pop_back();
                if(!flagn)flagp=1;
            }else if(!flagn){
                neg.pop_back();
                if(!flagp)flagn=1;
            }
        }
        int res = flor.size();
        if(lenn>lenp) res = res+1;
        else if(lenp>lenn) res = res+1;
        printf("%d\n",res);
    }
    return 0;
}
