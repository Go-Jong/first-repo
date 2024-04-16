#include <stdio.h>

int main(void){
    int arr[10];
    int sum = 0;

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        arr[i] = (arr[i] % 42);
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i!=j){
                if(arr[i] == arr[j]){
                    arr[i] = -1;
                }
            }
        }
    }

    for(int i=0; i<10; i++){
        if(arr[i] >= 0){
            sum = sum + 1;
        }
    }
    printf("%d", sum);
}