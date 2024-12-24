// 數1~100中出現多少次9


#include <stdio.h>


int main(){
    
    int count = 0;
    
    for(int i = 1;i<=100;i++){
        int n = i;
        while(n > 0){
            if(n % 10 == 9){
                count++;
            }
            n /=10;
        }
    }

    printf("1~100中總共出現%d次9",count);
    return 0;
}