#include <stdio.h>
int prime(int n){
    int Prime = 1;
    if (n <= 1){
        Prime = 0;
    }else{
        for(int i=2;i*i<=n; i++){
            if(n%i==0){
                Prime=0;
                break;
            }
        }
    }
    return Prime;
}
int main(){
    int num1,num2;
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d",&num1);
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d",&num2);
    if (prime(num1)){
        printf("%d la so nguyen to\n",num1);
    }else{
        printf("%d khong phai la so nguyen to\n",num1);
    }

    if(prime(num2)){
        printf("%d là so nguyen to\n",num2);
    }else{
        printf("%d khong phai la so nguyen to\n",num2);
    }
    return 0;
}

