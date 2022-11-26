/*J17:

nta elementdan iborat int seriya berilgan va ushbu seriyada oxirgi manfiy elementdan keyin kelgan sonlarni va ko'paytmasini chiqaring.
Input: n=10 array[]={1,-2,3,4,-5,6,-7,8,9,10}
Output: 8 9 10
p=720 */

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

void after_lastNegative(int array[], int n){
    int lastNegative, ind_lastNegative=0;
    for(int i=n-1; i>=0; i--){
        if(array[i]<0){
            lastNegative = array[i];
            ind_lastNegative = i;
            break;
        }
    }
    int p = 1;
    for(int j=ind_lastNegative+1; j<n; j++){
            printf("%d ", array[j]);
            p *= array[j];
        }

    if(ind_lastNegative == n-1){
        printf("Oxirgi element (ham) manfiy, undan keyin son yo'q\n");
    } else {
        printf("\np=%d\n", p);
    }

    
}

int main(){
    srand(time(0));
    
    int n;
    printf("n = "); scanf("%d", &n);

    int array[n];

    fill_rand_nums(array, n);
    output(array, n);
    after_lastNegative(array, n);


    return 0;

}
