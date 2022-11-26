/*J20:

nta elementdan iborat int seriya berilgan va ushbu seriyani teskariga o'qilgandagi sonlari bir xil o'qilsa "palindrom" deb chiqarib bersin, aks holda "palindrom emas" deb chiqarsin.(seriyani teskari o'qish mumkin emas)
Input: n=5 array[]={1,2,3,2,1}    palindrom

Input: n=4 array[]={4,3,4,3}
palindrom emas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand_nums(int array[], int n){
    for(int i=0; i<n; i++){
        array[i] = 1 + rand() % 4;
    }
}

void output(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    puts("");
}

void reverse_an_array(int array[], int reversed_array[], int n){
    for(int i=0, j=n-1; i<n; i++, j--){
        reversed_array[i] = array[j];
    }
}

int main(){
    srand(time(0));
    
    int n;
    printf("n = "); scanf("%d", &n);

    int array[n], reversed_array[n];

    fill_rand_nums(array, n);
    output(array, n);
    reverse_an_array(array, reversed_array, n);
    
    int tekshirish = 0;
    for(int i = 0; i < n; i++){
        if(array[i] != reversed_array[i]){
            tekshirish++;
            break;
        }
    }
    
    if(tekshirish) printf("Palindrom emas\n");
    else printf("Palindrom\n");



    return 0;

}