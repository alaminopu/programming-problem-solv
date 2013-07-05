#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,i,k;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;

        vector<int> age;
        for(i=0; i<n; i++){
            scanf("%d",&k);
            age.push_back(k);
        }

        sort(age.begin(),age.end());

        for(i=0; i<n; i++){
            if(i==n-1){
                printf("%d",age[i]);
            }
            else printf("%d ",age[i]);
        }
        printf("\n");

    }
    return 0;
}
