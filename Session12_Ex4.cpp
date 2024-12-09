#include <stdio.h>
int findMax(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=findMax(arr,size);
    printf("So lon nhat trong mang la: %d\n",max);
    return 0;
}

