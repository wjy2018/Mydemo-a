#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void whichTD(int day){
    switch (day)
    {
    case 0:
        printf("SUNDAY\n");
        break;
    case 1:
        printf("MONDAY\n");
        break;
    case 2:
        printf("TUESDAY\n");
        break;
    case 3:
        printf("WENDSDAY\n");
        break;
    case 4:
        printf("THURSDAY\n");
        break;
    case 5:
        printf("FRIDAY\n");
        break;
    case 6:
        printf("SATURDAY\n");
        break;
    default:
        printf("Wrong input.Invaild number!\n");
        break;
    }
}

int main(int argc, int* argv[]){
    srand((unsigned)time(NULL));
    int day = random()%7;
    printf("day is %d\n", day);
    whichTD(day);
    return 0;
}