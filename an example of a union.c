#include <stdio.h>

union number{
    int x;
    double y;
    };

int main()
{
    union number value;  //define union variable

    printf("put a value in integer member\n");
    value.x = 100;
    printf("int: %d\n double: %f\n",value.x,value.y);

    printf("put a value in double member\n");
    value.y = 100.0;
    printf("int: %d\n double: %f\n",value.x,value.y);
}
