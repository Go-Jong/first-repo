#include <stdio.h>

int main(void){
    int n,m;
    scanf("%d %d", &n, &m);

    int basket[n];
    int basket_f[n];

    for(int p=0; p<n; p++){
        basket[p] =  p+1;
        basket_f[p] = p+1;

    }
    int i, j;

    for(int p=0; p<m; p++){
        scanf("%d %d",&i, &j);

        basket[i-1] = basket_f[j-1];
        basket[j-1] = basket_f[i-1];

        for(int q=0; q<n; q++){
            basket_f[q] = basket[q];
        }
    }

    for(int p=0; p<n; p++){
        printf("%d ", basket[p]);
    }
}