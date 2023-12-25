//using sprintf
#include <stdio.h>

int main()
{
    char s[80];
    int x;
    double y;

    printf("Enter an integer an double:\n");
    scanf("%d%lf",&x,&y);

    sprintf(s,"integer:%6d\ndouble:%8.2f",x,y);

    printf("%s\n%s\n","The formated output stored in array s is:",s);
    return 0;

}
