// using atol
#include <stdio.h>
#include <stdlib.h>

int main()
{
  long l;

  l = atol("1000000");

    printf("%s%ld\n %s%ld\n",
           "The string \"1000000\" converted to long is ",l,
           "The converted value divided by 2 is ",l/2);

    return 0;
}
