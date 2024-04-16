#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int maxi, mini;

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    maxi = arr[0], mini = arr[0];
    for(int j=1; j<n; j++){
        if(maxi < arr[j]){
            maxi = arr[j];
        }

        if(mini > arr[j]){
            mini = arr[j];
        }
    }

    printf("%d %d", mini, maxi);
}