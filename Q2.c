#include <stdio.h>

int main()
{
    int occurence = 0;
    char k[20] = {};char c;
    fgets(k,20,stdin);
    printf("Enter char\n");
    scanf("%c",&c);
    
    for(int i = occurence;k[i];i++)if(k[i] == c)occurence++;
    printf("\nLength is %d",occurence);
   

    return 0;
}
