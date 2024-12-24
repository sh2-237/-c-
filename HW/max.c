// 10個整數中的最大值
#include <stdio.h>

int main() {
    
    int arr[10] = {0};

    for(int i =0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int n = 0, max = arr[0];

    while( n < 10){
        n++;
        if(arr[n] > arr[n-1]){
            max = arr[n];
        }
    }

    printf("%d",max);
    return 0;
}
