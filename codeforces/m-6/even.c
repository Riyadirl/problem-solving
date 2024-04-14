#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1; i<=x; i++) {
        if(i%2==0){
            printf("%d\n",i);
        }else if(x==1){
            printf("-1");
        }
    }

    return 0;
}