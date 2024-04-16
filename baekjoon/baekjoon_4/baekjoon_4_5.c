#include <stdio.h>

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    
    int basket[n];
    int ball[n];
    
    for(int p=0; p<n; p++){
        basket[p] = 0;
    }

    for(int p=0; p<n; p++){
        ball[p] = p+1;
    }

    int i, j, k;

    for(int  p=0; p<m; p++){
        scanf("%d %d %d",&i, &j, &k);

        for(int p=i-1; p<=j-1; p++){
            basket[p] = ball[k-1];
        }
    }

    for(int p=0; p<n; p++){
        printf("%d ", basket[p]);
    }
    
}

// int basket[n] = 0; 이 안되는 이유?