#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int N;
    while(scanf("%d",&N)==1 && N!=0){
        int i,j,k,num;
        priority_queue< int, vector<int>, greater<int> > number;

        for(i=0; i<N; i++){
            scanf("%d",&num);
            number.push(num);

        }
        int cost=0,res;
        while(number.size()>1){
            res = number.top();
            number.pop();
            res +=number.top();
            number.pop();
            cost=cost+res;
            number.push(res);
        }


        printf("%d\n",cost);
    }
    return 0;
}
