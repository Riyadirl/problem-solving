#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[10];
    gets(a);
    char b[10];
    gets(b);

    int st1 = strlen(a);
     int st2 = strlen(b);

     printf("%d %d\n", st1, st2);
     printf("%s%s\n",a ,b);
     printf("%s %s\n",a ,b);


    return 0;
}
// not yet