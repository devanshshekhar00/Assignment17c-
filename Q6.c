
#include <stdio.h>

int main()
{
    int k;
    char c[4],d[4];
    fgets(c,4,stdin);
   
    for(int i = 0; c[i];i++) 
    {
         d[i] = c[2-i];
    }
    printf("Reverse string");
    printf("\n%s",d);

    return 0;
}
