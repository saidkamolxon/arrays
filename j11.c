/* J11:

10talik uzunlikdagi int seriya elementlari orasida ikkinchi eng kichik qiymatni aniqlovchi dastur tuzing.
Input: A[]={1,2,3,4,5,6,7,8,9,10}
Output: second_min=2 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ushbu funksiya arrayni tasodifiy sonlar bilan to'ldirib beradi
void fill_random_nums(int array[], int n){
    for(int i = 0; i < n; i++){
        array[i] = 1 + rand() % 10;
    }
}

//Ushbu funksiya arrayni ekranga chiqaradi
void output(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    puts("");
}

int find_second_min(int array[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array[1];
}

int main(){

    srand(time(0));
    
    int n;
    printf("n = "); scanf("%d", &n);
    
    int array[n];
    
    fill_random_nums(array, n);
    output(array, n);
    printf("second_min = %d\n", find_second_min(array, n));

    return 0;    

    
}