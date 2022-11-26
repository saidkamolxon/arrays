/* J13:

nta butun sondan iborat int seriya berilgan va ulardagi max va min qiymatlar(max va min inobatga olinmasin) orasida nechta son borligini aniqlaydigan dastur tuzing.
Input: n=5 A[5]={2,9,3,-4,5}
Output: max va min orasida 1ta son bor */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ushbu funksiya arrayni tasodifiy sonlar bilan to'ldirib beradi
void fill_random_nums(int array[], int n){
    for(int i = 0; i < n; i++){   
        array[i] = -10 + rand() % 21;
    }
}

//Ushbu funksiya arrayni ekranga chiqaradi
void output(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    puts("");
}

void qtyNums(int array[], int n){
    int max = array[0], min = max;
    int max_index = 0, min_index = 0;
    
    for(int i = 1; i < n; i++){
        if(array[i] > max) {
            max = array[i];
            max_index = i;
        }
        if(array[i] < min) {
            min = array[i];
            min_index = i;
        }
    }
    printf("max = %d(index = %d), min = %d(index = %d)\n", max, max_index, min, min_index);
    printf("max va min orasida %dta son bor\n", abs(max_index-min_index)-1);
    
}

int main(){

    srand(time(0));
    
    int n;
    printf("n = "); scanf("%d", &n);

    int array[n];
    
    fill_random_nums(array, n);
    output(array, n);
    qtyNums(array, n);
    
    
    return 0;    

}