/*J18:

nta elementdan iborat int seriya berilgan va ushbu seriyada 1-chi juft element bilan oxirgi toq element orasidagi sonlarni va yig'indisini chiqaring.
Input: n=5 array[]={1,2,-3,4,5}
Output: -3 4
sum=1 */

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

void between_firstEven_and_lastOdd(int array[], int n){
    int firstEven=1, ind_firstEven=0, ind_lastOdd=0;
    for(int i=0; i<n; i++){
        if(array[i]%2 != firstEven && firstEven == 1){
            firstEven = array[i];
            ind_firstEven = i;
        }

        if(array[i]%2){
            ind_lastOdd = i;
        }
    }
    int sum=0;
    for(int j=ind_firstEven+1; j<ind_lastOdd; j++){
        printf("%d ", array[j]);
        sum += array[j];
    }
    printf("\nSum = %d\n", sum);
}

int main(){
    srand(time(0));
    
    int n;
    printf("n = "); scanf("%d", &n);

    int array[n];

    fill_rand_nums(array, n);
    output(array, n);
    between_firstEven_and_lastOdd(array, n);


    return 0;

}