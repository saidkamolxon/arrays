/* J14:

Berilgan massivdan K o'lchamdagi har bir qo'shni kichik massivlar uchun maksimal elementni topish dasturini yozing.

IN: A[]={1, 3, 6, 21, 4, 9, 12, 3, 16, 10}
K=4

OUT:
1 3 6 21 —-> 21
3 6 21 4 —-> 21
6 21 4 9 —-> 21
21 4 9 12 —> 21
4 9 12 3  —-> 12
9 12 3 16 —> 16
12 3 16 10 —-> 16 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
            // 0, 1, 2,  3, 4, 5,  6, 7,  8,  9
    int A[] = {1, 3, 6, 21, 4, 9, 12, 3, 16, 10};
    int k;
    printf("k = "); scanf("%d", &k);

    int lenth = sizeof(A) / sizeof(A[0]);
    int findMax[k];

    for(int i = 0; i <= lenth-k; i++){
        for(int j = i, l = 0; j < k+i; j++, l++){
            findMax[l] = A[j];
            printf("%d ", findMax[l]);
        }
        int max = findMax[0];
        for(int p = 1; p < k; p++){
            if(max < findMax[p]) max = findMax[p];
        }
        printf("---> %d\n", max);
    }       


    return 0;

}