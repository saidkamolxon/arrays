/*J19:

nta elementdan iborat int seriya berilgan va ushbu seriyada nechta manfiy va musbat, juft va toq element borligini aniqlaydigan dastur tuzing.
Input: n=10 array[]={1,-2,3,4,-5,6,-7,8,9,10}
Output: 3ta manfiy, 7ta musbat, 5ta toq, 5ta juft*/

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

void find(int array[], int n){
    int pos=0, neg=0, even=0, odd=0;
    for(int i=0; i<n; i++){
        if(array[i]%2) odd++;
        else even++;

        if(array[i]>0) pos++;
        else if(array[i]<0) neg++;
    }

    printf("%dta manfiy, %dta musbat, %dta toq, %dta juft\n", neg, pos, odd, even);

}

int main(){
    srand(time(0));
    
    int n;
    printf("n = "); scanf("%d", &n);

    int array[n];

    fill_rand_nums(array, n);
    output(array, n);
    find(array, n);


    return 0;

}