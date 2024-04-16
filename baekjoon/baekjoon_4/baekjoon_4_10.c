#include <stdio.h>

int main(void){
    int n;
    int max = 0;
    float sum = 0;
    float average = 0;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);

        if(arr[i] >= max){
            max = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        sum = sum + (arr[i]/(float)max)*100;
    }

    average = sum / n;

    printf("%f", average);
}