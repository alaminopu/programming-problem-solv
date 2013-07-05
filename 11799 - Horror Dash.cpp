#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int cas, casno=0;
    scanf("%d",&cas);
    while(cas--){
        int n, arr[200];
        scanf("%d",&n);

        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        sort(arr,arr+n);
        printf("Case %d: %d\n",++casno,arr[n-1]);
    }
    return 0;
}

