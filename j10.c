/*J10:

1 dan 100gacha sonlar berilgan faqat 1ta son tushib qolgan. Tushib qolgan son nechiligini topish kerak.

*/

#include <stdio.h>
#include <stdlib.h>

void select_sort(int a[], int lenth){
    int temp;
    for(int i = 0; i < lenth; i++){
        for(int j = i+1; j < lenth; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void findTheLostNumber(int a[], int lenth){
    for(int i = 1; i <= 100; i++){
        if(a[i-1]!=i){
            printf("Yo'qolgan son = %d\n", i);
            break;
        }
    }
}

int main(){

    int a[] = {88, 85, 96, 81, 39, 12, 4, 56, 2, 13, 31, 51,
               54, 21, 5, 48, 28, 57, 40, 44, 55, 74, 80, 94,
               17, 61, 47, 1, 10, 27, 83, 42, 36, 75, 3, 65,
               45, 24, 15, 25, 14, 30, 41, 53, 34, 11, 93, 86,
               32, 26, 97, 7, 98, 50, 38, 68, 59, 64, 63, 76,
               91, 52, 71, 43, 35, 18, 79, 87, 29, 58, 78, 22,
               95, 49, 90, 67, 89, 69, 62, 9, 33, 99, 6, 82, 8,
               70, 84, 77, 37, 72, 46, 16, 23, 73, 92, 60, 66,
               100, 20};

    int lenth = sizeof(a) / sizeof(a[0]);

    select_sort(a, lenth);
    findTheLostNumber(a, lenth);

    return 0;

}