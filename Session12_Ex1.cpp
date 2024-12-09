#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int num1=5;
    int num2=10;
    int total=sum(num1,num2);
    printf("Tong cua %d và %d la: %d\n",num1,num2,total);
    return 0;
}

