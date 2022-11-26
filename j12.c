/* J12: 

Nta sondan iborat int seriyani 1dan 15gacha random sonlar ichidan faqat bir marta(unique) uchraydigan sonlar bilan to'ldiring va ekranga chiqaring.

Input: n=10
Output:  10 2 9 3 7 1 8 13 6 14

Arrayda ikkita bir hil son bolmasligi kerak */

//j12

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Ushbu funksiya arrayni tasodifiy sonlar bilan to'ldirib beradi
void fill_random_nums(int array[], int n){
    
    int temp, duplicates;

    for(int i = 0; i < n; i++){   
        do{
            duplicates = 0;
            
            temp = 1 + rand() % 15;
            
            for(int j = 0; j < i; j++){
                if(array[j] == temp){
                    duplicates++;
                }
            }
    
        } while(duplicates != 0);

        array[i] = temp;
    }
}        
    

//Ushbu funksiya arrayni ekranga chiqaradi
void output(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    puts("");
}

int main(){

    srand(time(0));
    
    int n;
    while(1){
        printf("n = "); scanf("%d", &n);
        if(n <= 15) break;
        else printf("15 dan kichik son kiriting!\n");
    }
    
    int array[n];
    
    fill_random_nums(array, n);
    output(array, n);
    
    
    return 0;    

}