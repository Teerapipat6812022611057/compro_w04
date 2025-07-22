#include <stdio.h>           


void countCall() {              
    
    int counter = 0;
    counter++;
    printf("Call Fuctiong: Counter = %d\n", counter);
}

int main(){
    printf("Starting funtion calls...\n");
    countCall();
    printf("After first call: \n");
    countCall();
    return 0;
}
// ความแตกต่างของผลลัพธ์Non-staticกับstatic
// ผลลัพธ์ของNon-staticจะมีค่าเริ่ม=1และหลังเริ่มคำตอบก็ยัง=1
// ส่วนผลลัพธ์ของstaticจะมีค่าเริ่ม=1และหลังเริ่มคำตอบจะ=2