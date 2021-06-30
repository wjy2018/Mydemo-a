#include <stdio.h>

#define TODAY FRIDAY
#define SIZE 115200
#define STR1(R) #R
#define STR2(R) STR1(R)

int main(void){
    printf("Today is " STR2(TODAY)"\n");
    printf("Size is %d\n", SIZE);
    printf("Today %s, size %d\n", STR2(TODAY), SIZE);
    return 0;
}