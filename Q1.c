#include <stdio.h>

int main()
{
    int length = 0;
    char k[20];
    fgets(k,20,stdin);
    for(int i = length;k[i];i++)length++;
    printf("\nLength is %d",length);
   

    return 0;
}
