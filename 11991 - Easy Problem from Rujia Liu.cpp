#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#define M 1000005

using namespace std;

vector <int> dp[M];

int main(){
    int n, m, k, v,i,j,s,c;
    int num[M];
    while(scanf("%d %d",&n,&m)!=EOF){
        for(i=0; i<n; i++){
            scanf("%d",&num[i]);
        }

        for(i=0; i<n; i++) dp[i].clear();

        for(j=0; j<n; j++){
            dp[num[j]].push_back(j+1);
        }

        for(j=0; j<m; j++){
            scanf("%d %d",&k,&v);
            if(dp[v].size()<k) printf("0\n");
            else printf("%d\n",dp[v][k-1]);
        }
    }
    return 0;
}
