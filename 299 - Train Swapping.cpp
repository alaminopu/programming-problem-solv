#include <cstdio>

int bubble_sort(int arr[], int size){
    int i, j, temp, k=0;

    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                k++;
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return k;
}

int main(){
    int cas;
    int n, arr[60];
    scanf("%d",&cas);
    while(cas--){
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        int x = bubble_sort(arr,n);
        printf("Optimal train swapping takes %d swaps.\n",x);
    }
}
