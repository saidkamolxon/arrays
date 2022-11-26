/* J9:

Nta sondan iborat int seriyani 8dan 21gacha random sonlar bilan to'ldiring va ushbu seriya elementlarini chapga kta elementga suring va saqlang.

Input: n=10 array=1 2 3 4 5 6 7 8 9 10 k=3 
Output: 4 5 6 7 8 9 10 1 2 3 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ushbu funksiya arrayni tasodifiy sonlar bilan to'ldirib beradi
void fill_random_nums(int array[], int n){
    for(int i = 0; i < n; i++){   
        array[i] = 8 + rand() % 14;
    }
}

//Ushbu funksiya arrayni ekranga chiqaradi
void output(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    puts("");
}

void kMartaSurish(int array[], int n, int k){
    int temp[k];
    
    for(int j = 0; j<k; j++){
        temp[j] = array[j];
    }
    
    for(int i = 0; i < n-k; i++){
      array[i] = array[i+k];
    }

    for(int l = n-k, o = 0; l < n; l++, o++){
        array[l] = temp[o];
    }
}

int main(){

    srand(time(0));
    
    int n, k;
    printf("n = "); scanf("%d", &n);
    printf("k = "); scanf("%d", &k);

    int array[n];
    
    fill_random_nums(array, n);
    output(array, n);
    kMartaSurish(array, n, k);
    output(array, n);
    
    
    return 0;    

}