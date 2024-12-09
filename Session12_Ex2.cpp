#include <stdio.h>
void in_mang(int arr[],int size) {
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    in_mang(arr,size);
    return 0;
}

