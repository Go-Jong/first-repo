#include <stdio.h>

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int initial_i, initial_j;

    int arr_1[n];
    int arr_2[n];

    for(int k=0; k<n; k++){
        arr_1[k] = k+1;
        arr_2[k] = k+1;
    }

    for(int k=1; k<=m; k++){
        scanf("%d %d", &initial_i, &initial_j);

        int i = initial_i - 1;
        int j = initial_j - 1;
        
        for(int l=1; l<=(initial_j-initial_i+1)/2; l++){

            for(int p=0; p<n; p++){
                arr_2[p] = arr_1[p];
            }

            arr_1[i] = arr_2[j];
            arr_1[j] = arr_2[i];

            i = i+1;
            j = j-1;
        }
    }

    for(int k=0; k<n; k++){
        printf("%d ", arr_1[k]);
    }
}