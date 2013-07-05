#include <cstdio>

int bubble_sort(int arr[], int size){
    int i, j, temp, k=0;

    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                k++;
            }
        }
    }
    return k;
}

int main(){
    int n, arr[1060];

    while(scanf("%d",&n)!=EOF){
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        int x = bubble_sort(arr,n);
        printf("Minimum exchange operations : %d\n",x);
    }

    return 0;
}
