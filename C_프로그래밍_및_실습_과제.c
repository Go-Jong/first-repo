#include <stdio.h>
#define _CRT_SECURE_NO_WARNIGNS
int main() {
    int tri_e1, tri_e2, tri_e3;         // tri_e는 triangle_edge를 의미합니다.
    int long_e;				           // long_e는 long_edge로 세 변의 길이 중 가장 긴 변의 길이를 의미합니다.
    int res_e_s;                      // res_e_s는 residual_edge_sum으로 나머지 두 변의 길이 값의 합을 의미합니다.
    int res_e1, res_e2;              // res_e1과 res_e2는 각각 residual_edge1, residual_edge2의 뜻으로 가장 긴 변을 제외한 나머지 두 변을 의미합니다.

    printf("삼각형의 세 변의 길이를 입력하시오.\n");
    
    // 다음은 삼각형 세 변의 길이를 입력받는 명령문입니다.
    scanf("%d %d %d", &tri_e1, &tri_e2, &tri_e3);     

    //조건문을 활용하여 세 변의 길이중 가장 긴 변의 길이와 나머지 두 변의 길이의 합 그리고 나머지 두 변의 길이를 구하도록 구현하였습니다.
    if (tri_e1 >= tri_e2 && tri_e1 >= tri_e3) {  
        long_e = tri_e1;
        res_e_s = tri_e2 + tri_e3;
        res_e1 = tri_e2, res_e2 = tri_e3;
    }

    else if (tri_e2 >= tri_e1 && tri_e2 >= tri_e3) {
        long_e = tri_e2;
        res_e_s= tri_e1 + tri_e3;
        res_e1 = tri_e1, res_e2 = tri_e3;
    }

    else if (tri_e3 >= tri_e1 && tri_e3 >= tri_e2) {
        long_e = tri_e3;
        res_e_s = tri_e2 + tri_e1;
        res_e1 = tri_e1, res_e2 = tri_e2;
    }

    // 삼각형 생성 조건에 따라서 삼각형의 종류를 구분해주는 조건문입니다.
    if(long_e < res_e_s){
        if(tri_e1 == tri_e2 && tri_e1 == tri_e3){
            printf("입력하신 변의 길이를 통해 구한 삼각형의 개형은 한 변의 길이가 %d인 \'정삼각형\'입니다.", tri_e1);
        }

        else if(tri_e1 == tri_e2 || tri_e1 == tri_e3 || tri_e2 == tri_e3){
            if(tri_e1 == tri_e2){
                printf("입력하신 변의 길이를 통해 구한 삼각형의 개형은 이등변의 길이가 %d인 \'이등변삼각형\'입니다.", tri_e1);
            }

            else if(tri_e1 == tri_e3){
                printf("입력하신 변의 길이를 통해 구한 삼각형의 개형은 이등변의 길이가 %d인 \'이등변삼각형\'입니다.", tri_e3);
            }

            else{
                printf("입력하신 변의 길이를 통해 구한 삼각형의 개형은 이등변의 길이가 %d인 \'이등변삼각형\'입니다.", tri_e2);
            }
        }

        // 다음은 일반삼각형 중에서도 직각삼각형, 둔각삼각형, 예각삼각형으로 구분해주는 조건문입니다.
        else{
            if(long_e*long_e == res_e1*res_e1 + res_e2*res_e2){
                printf("입력하신 변의 길이를 통해 구한 삼각형의 개형은 \'일반삼각형\' 중에서 빗변의 길이가 %d인 \'직각삼각형\'입니다.", long_e);
            }

            else if(long_e*long_e > res_e1*res_e1 + res_e2*res_e2){
                 printf("입력하신 변의 길이를 통해 구한 삼각형의 개형은 \'일반삼각형\' 중에서 밑변의 길이가 %d인 \'둔각삼각형\'입니다. ", long_e);
            }

            else{
                 printf("입력하신 변의 길이를 통해 구한 삼각형의 개형은 \'일반삼각형\' 중에서 밑변의 길이가 %d인 \'예각삼각형\'입니다.", long_e);
            }
        }

    }

    else {
        printf("삼각형 생성 조건에 위배되는 변의 길이를 입력하였습니다.");
    }
}