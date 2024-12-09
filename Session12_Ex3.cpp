#include <stdio.h>
int tinh_factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int number=5;
    int factorial=tinh_factorial(number);
    printf("Giai thua cua %d la: %d\n",number,factorial);
    return 0;
}

