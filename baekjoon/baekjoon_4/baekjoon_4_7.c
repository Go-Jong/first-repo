#include <stdio.h>

int main(void){
    int arr_1[28];
    int arr_2[30];
    int i;

    for(i=0; i<30; i++){
        arr_2[i] = i+1;
    }

    for(i=0; i<28; i++){
        scanf("%d", &arr_1[i]);

        for(int j=0; j<30; j++){
            if(arr_1[i] == arr_2[j]){
                arr_2[j] = 0;
            }
        }
    }

    for(int k=0; k<30; k++){
        if(arr_2[k] > 0){
            printf("%d\n", arr_2[k]);
        }
    }
}
