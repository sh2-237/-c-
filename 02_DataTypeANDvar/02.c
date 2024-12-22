// 數據類型和變量

#include <stdbool.h>
#include <stdio.h>

int main(){
    // 不同數據類型的長度 (單位是byte)
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(long)); // sizeof(int) = sizeof(long)
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));
    printf("%d\n",sizeof( 3 + 3.5 )); // 可以看出來默認是double類型 所以輸出是8
    // sizeof中如果放的是表達式，不會真實去計算
    short s = 5;
    int b = 1;
    printf("%zd\n", sizeof( s = b + 1)); // 2
    printf("s = %d\n",s); // 5 --> 沒有運行表達式中的計算

    printf("%6.2f\n", 0.5);

    // 全局變量不初始化 --> 默認為0
    // 局部變量不初始化 --> 隨機值
    return 0;
}