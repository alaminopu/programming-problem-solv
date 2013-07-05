#include <cstdio>
#include <cstring>

typedef unsigned long long datatype;
datatype count;
datatype dp[70][70];

datatype trib(int n, unsigned int back)
{
    int i;
    count++;
    if(n<=1) return 1;

    if(dp[n][back]!=-1) return dp[n][back];
    dp[n][back]=1;
    for(i=1;i<=back;i++)
         dp[n][back]+=trib(n-i,back);
    return dp[n][back];
}

int main()

{
    int m,n,x,caseno=0;
    while(scanf("%d %d",&m,&n)==2 && m<61 && n<61){
        memset(dp,-1,sizeof(dp));
        count=trib(m,n);
        printf("Case %d: %llu\n",++caseno,count);
    }
    return 0;

}
