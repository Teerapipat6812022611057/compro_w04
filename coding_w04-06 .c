#include <stdio.h>

const int GLOBAL_RATE = 10; // Global constant

void calculate() {
    const int LOCAL_BONUS = 50; // Local constant
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    //ใช้ GLOBAL_RATE ได้เพราะ global
     printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    // ใช้ LOCAL_BONUS ไม่ได้ เพราะอยู่นอก scopeของcalculate()
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS; // จะเกิด compile-time error
    return 0;
}
