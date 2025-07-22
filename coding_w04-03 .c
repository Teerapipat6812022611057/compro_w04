#include <stdio.h>    

int main() {
    char Only_monday = 'K'; //ใช้charเนื่องจากต้องการเก็บค่าตัวแปรเป็นตัวอักษรตัวเดียว
    int Three_man_down = 18; //ใช้intเพราะต้องการเก็บค่าตัวแปรเป็นตัวเลข          
    float Body_slam = 75.45; //ใช้floatเพราะต้องการเก็บค่าตัวแปรที่ค่าทศนิยม
    char Cocktail[] = "male"; //ใช้string[]เพราะต้องการเก็บค่าตัวแปรที่เป็นตัวอักษรหลายตัว

    printf("nameInitial = %c\n", Only_monday );
    printf("age = %u\n", Three_man_down );
    printf("weight = %f\n", Body_slam );
    printf("gender = %s\n", Cocktail );
    return 0;
}