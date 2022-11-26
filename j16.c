/*J16:

nta elementdan iborat int seriya berilgan va ushbu seriyada 1-chi manfiy elementgacha bo'lgan sonlarni va yig'indisini chiqaring.
Input: n=5 array[]={1,2,-3,4,5}
Output: 1 2
  sum=3 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand_nums(int array[], int n){
    for(int i=0; i<n; i++){
        array[i] = -10 + rand() % 21;
    }
}

void output(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    puts("");
}

void until_firstNegative(int array[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if(array[i]<0) break;
        printf("%d ", array[i]);
        sum += array[i];
    }    
    printf("\nsum = %d\n", sum);
}

int main(){
    srand(time(0));
    
    int n;
    printf("n = "); scanf("%d", &n);

    int array[n];

    fill_rand_nums(array, n);
    output(array, n);
    until_firstNegative(array, n);


    return 0;

}