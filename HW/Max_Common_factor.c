// 求最大公約數


#include <stdio.h>

int main(){

    int num1,num2,max;
    scanf("%d %d", &num1, &num2);

    int max_num = num1>num2 ? num1 : num2;

    for(int i = 1; i<=max_num ;i++){
        if(num1 % i == 0 && num2 % i == 0){
            max = i;
        }
    }

    printf("%d",max);
    return 0;

}