#include <stdio.h>

int main()
{
    int occurence = 0;
    char k[20] = {};char c;
    fgets(k,20,stdin);
  
    
    for(int i = occurence;k[i];i++)if(k[i] == 'a' || k[i] == 'e' || k[i] == 'i' || k[i] == 'o' || k[i] == 'u')occurence++;
    printf("\nvowels is %d",occurence);
   

    return 0;
}
