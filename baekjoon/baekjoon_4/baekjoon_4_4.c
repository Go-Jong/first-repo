#include <stdio.h>

int main(void){
    int arr[9];
    int max = 0;
    int line = 0;
    
    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]);

        if(arr[i] > max){
            max = arr[i];
            line = i+1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", line);
}